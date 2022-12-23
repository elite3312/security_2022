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
myobj={'layout':my_layout}
r = requests.post(url, json = myobj)
pass