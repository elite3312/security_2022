# helloworld            
- return to magic function to call shell
# helloworld_again      
- return to magic function to call shell, but input must start with hellowrld, and ret address must be stack aligned
# sakana                
- use format string to leak pie base and libc base
- then ret2 libc
# modohayaku            
- shellcode must contain certain bytes
# modomodohayaku        
- not solved
# modomodomodohayaku   
- not solved
# cyberpsychosis        
![alt text](./cyberpsychosis/offset_notes.jpg)
- find libc base with showinfo
- overwrite atol's got address with libc system with edit_info
- input bin sh into buffer
- buffer gets passed into system
# Test_Subject_087      
- not solved
# project_alicization   
- guess password using the same srand(time(0))
- input shellcode that contain all ascii byte
# guitar_hero           
- not solved