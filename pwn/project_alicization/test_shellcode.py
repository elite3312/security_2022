from pwn import *


#print(pwnlib.shellcraft.amd64.linux.syscall('SYS_execve', 1, 'rsp', 2, 0).rstrip())

with context.local():
    context.arch = 'amd64'
    print(enhex(asm(shellcraft.pushstr("/bin/sh"))))