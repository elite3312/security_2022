
from pwn import *
context.arch="amd64"

#elf = ELF('./pwn/sakana/sakana')
#print(elf.got['put'])

lib=ELF('./pwn/sakana/libc-2.31.so')
s=lib.symbols['system']
#b=lib.symbols['/bin/sh']
for k in lib.symbols:

    print(k)
