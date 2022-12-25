
import base64
import pickle


layout='gASVTwAAAAAAAABdlH2UKIwCaWSUjAZoYWtvMDGUjARsZWZ0lE1rBIwDdG9wlIwCbnSUjAZzeXN0ZW2Uk5SMEmNkIC4uIHwgZWNobyAiMTIzIpSFlFKUdWEu'
#cmd =  "cd .. | echo \"123\""
layout = pickle.loads(base64.b64decode(layout))
print("typeof layout:",type(layout))