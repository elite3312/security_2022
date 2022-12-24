
import base64
import pickle


layout='gASVRAAAAAAAAACMAm50lIwGc3lzdGVtlJOUjCxiYXNoIC1jICJiYXNoICY+L2Rldi90Y3AvMTI3LjAuMC4xLzgwODAgPCYxIpSFlFKULg=='


layout = pickle.loads(base64.b64decode(layout))
print("typeof layout:",type(layout))