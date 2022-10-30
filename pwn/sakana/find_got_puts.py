
from pwn import *


#libc=ELF('pwn/sakana/libc-2.31.so')
elf=context.binary=ELF('pwn/sakana/sakana')
print('got:',elf.got)

print('plt:',elf.plt)
