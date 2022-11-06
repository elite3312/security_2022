typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00101020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _exit(int __status)

{
                    // WARNING: Subroutine does not return
  _exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



void _start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,param_3,
                    auStack8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00101103)
// WARNING: Removing unreachable block (ram,0x0010110f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101144)
// WARNING: Removing unreachable block (ram,0x00101150)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_8061 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_8061 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



void banner(void)

{
  sakana();
  puts("Welcome to fish, the friendly interactive shell!\n");
  return;
}



undefined8 main(void)

{
  banner();
  shell();
  return 0;
}



void chinanago(void)

{
  puts(&DAT_00103040);
  puts(&DAT_001030d8);
  puts(&DAT_00103170);
  puts(&DAT_00103208);
  puts(&DAT_001032a0);
  puts(&DAT_00103338);
  puts(&DAT_001033d0);
  puts(&DAT_00103468);
  puts(&DAT_00103500);
  puts(&DAT_00103598);
  puts(&DAT_00103630);
  puts(&DAT_001036c8);
  puts(&DAT_00103760);
  puts(&DAT_001037f8);
  puts(&DAT_00103890);
  puts(&DAT_00103928);
  puts(&DAT_001039c0);
  puts(&DAT_00103a58);
  puts(&DAT_00103af0);
  puts(&DAT_00103b88);
  puts(&DAT_00103c20);
  puts(&DAT_00103cb8);
  puts(&DAT_00103d50);
  puts(&DAT_00103de8);
  puts(&DAT_00103e80);
  puts(&DAT_00103f18);
  puts(&DAT_00103fb0);
  puts(&DAT_00104048);
  puts(&DAT_001040e0);
  puts(&DAT_00104178);
  puts(&DAT_00104210);
  puts(&DAT_001042a8);
  puts(&DAT_00104340);
  puts(&DAT_001043d8);
  puts(&DAT_00104470);
  puts(&DAT_00104508);
  puts(&DAT_001045a0);
  return;
}



void sakana(void)

{
  puts(&DAT_00104638);
  puts(&DAT_001046f0);
  puts(&DAT_001047a8);
  puts(&DAT_00104860);
  puts(&DAT_00104918);
  puts(&DAT_001049d0);
  puts(&DAT_00104a88);
  puts(&DAT_00104b40);
  puts(&DAT_00104bf8);
  puts(&DAT_00104cb0);
  puts(&DAT_00104d68);
  puts(&DAT_00104e20);
  puts(&DAT_00104ed8);
  puts(&DAT_00104f90);
  puts(&DAT_00105048);
  puts(&DAT_00105100);
  puts(&DAT_001051b8);
  puts(&DAT_00105270);
  puts(&DAT_00105328);
  puts(&DAT_001053e0);
  puts(&DAT_00105498);
  puts(&DAT_00105550);
  puts(&DAT_00105608);
  puts(&DAT_001056c0);
  puts(&DAT_00105778);
  puts(&DAT_00105830);
  puts(&DAT_001058e8);
  puts(&DAT_001059a0);
  return;
}



ulong get_line(FILE *param_1,FILE *param_2)

{
  int iVar1;
  ulong local_18;
  ulong local_10;
  
  puts((char *)param_1);
  local_18 = 0;
  local_10 = 0;
  strlen((char *)param_1);
  while( true ) {
    iVar1 = getc(param_1);
    if ((char)iVar1 == '\n') break;
    if (local_10 < 0x200) {
      param_1 = param_2;
      strins((char *)param_2,(char)iVar1,local_18);
      local_10 = local_10 + 1;
      local_18 = local_18 + 1;
    }
  }
  *(undefined *)((long)&param_2->_flags + local_10) = 0;
  return local_10;
}



void parse_cmd(void)

{
  int iVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  FILE local_118;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen(cmd);
  if ((int)sVar2 != 0) {
    trim(cmd);
    iVar1 = strcmp(cmd,"help");
    if (iVar1 == 0) {
      puts(
          "help\t\t: print this help menu.\nsakana\t\t: sakana~\nchinanago\t: chinanago~\nexit\t\t: terminate shell.\nclear\t\t: clear screen.\n"
          );
    }
    else {
      iVar1 = strcmp(cmd,"printf");
      if (iVar1 == 0) {
        memset(&local_118,0,0x100);
        get_line((FILE *)&DAT_00105adf,&local_118);
        printf((char *)&local_118);
      }
      else {
        iVar1 = strcmp(cmd,"clear");
        if (iVar1 == 0) {
          puts("\x1b[2J\x1b[H");
        }
        else {
          iVar1 = strcmp(cmd,"exit");
          if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
            _exit(1);
          }
          iVar1 = strcmp(cmd,"sakana");
          if (iVar1 == 0) {
            sakana();
          }
          else {
            iVar1 = strcmp(cmd,"chinanago");
            if (iVar1 == 0) {
              chinanago();
            }
            else {
              printf("%s: command not found\nRun \'help\' for usage.\n",cmd);
            }
          }
        }
      }
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void flush_line(char *param_1,char *param_2,int param_3,long param_4)

{
  puts("\x1b[2K\r");
  printf("%s%s",param_1,param_2);
  printf("%s%dG","\x1b[",(int)param_4 + param_3 + 1);
  return;
}



void shell(void)

{
  do {
    get_line((FILE *)&DAT_00105b49,(FILE *)cmd);
    parse_cmd();
    memset(cmd,0,0x200);
  } while( true );
}



int strcmp(char *__s1,char *__s2)

{
  byte *local_18;
  byte *local_10;
  
  local_10 = (byte *)__s2;
  for (local_18 = (byte *)__s1; (*local_18 != 0 && (*local_18 == *local_10));
      local_18 = local_18 + 1) {
    local_10 = local_10 + 1;
  }
  return (uint)(*local_10 < *local_18) - (uint)(*local_18 < *local_10);
}



int strncmp(char *__s1,char *__s2,size_t __n)

{
  size_t local_30;
  byte *local_18;
  byte *local_10;
  
  local_30 = __n;
  local_18 = (byte *)__s1;
  local_10 = (byte *)__s2;
  while( true ) {
    if (local_30 == 0) {
      return 0;
    }
    if (*local_18 != *local_10) break;
    local_18 = local_18 + 1;
    local_10 = local_10 + 1;
    local_30 = local_30 - 1;
  }
  return (uint)(*local_10 < *local_18) - (uint)(*local_18 < *local_10);
}



char * strcpy(char *__dest,char *__src)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(__src);
  pcVar2 = (char *)memcpy(__dest,__src,(ulong)((int)sVar1 + 1));
  return pcVar2;
}



void * memcpy(void *__dest,void *__src,size_t __n)

{
  int local_1c;
  undefined *local_18;
  undefined *local_10;
  
  local_18 = (undefined *)__dest;
  local_10 = (undefined *)__src;
  for (local_1c = 0; (ulong)(long)local_1c < __n; local_1c = local_1c + 1) {
    *local_18 = *local_10;
    local_18 = local_18 + 1;
    local_10 = local_10 + 1;
  }
  return __dest;
}



size_t strlen(char *__s)

{
  char *local_20;
  uint local_c;
  
  local_c = 0;
  local_20 = __s;
  while (*local_20 != '\0') {
    local_c = local_c + 1;
    local_20 = local_20 + 1;
  }
  return (ulong)local_c;
}



int isspace(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = (char)param_1;
  if ((cVar2 == ' ') || (cVar2 == '\f')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) || (cVar2 == '\n')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) || (cVar2 == '\r')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) || (cVar2 == '\t')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) || (cVar2 == '\v')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}



void trim(char *param_1)

{
  int iVar1;
  size_t sVar2;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  sVar2 = strlen(param_1);
  local_c = (int)sVar2 - 1;
  if (local_c != 0xffffffff) {
    while (iVar1 = isspace((int)param_1[(int)local_10]), iVar1 != 0) {
      local_10 = local_10 + 1;
    }
    while ((local_10 <= local_c && (iVar1 = isspace((int)param_1[local_c]), iVar1 != 0))) {
      local_c = local_c - 1;
    }
    for (local_14 = local_10; local_14 <= local_c; local_14 = local_14 + 1) {
      param_1[(int)(local_14 - local_10)] = param_1[(int)local_14];
    }
    param_1[(int)(local_14 - local_10)] = '\0';
  }
  return;
}



void * memset(void *__s,int __c,size_t __n)

{
  int local_14;
  undefined *local_10;
  
  local_10 = (undefined *)__s;
  for (local_14 = 0; (void *)(long)local_14 < __n; local_14 = local_14 + 1) {
    *local_10 = (char)__c;
    local_10 = local_10 + 1;
  }
  return (void *)(long)local_14;
}



void strins(char *param_1,char param_2,ulong param_3)

{
  size_t sVar1;
  uint local_10;
  
  sVar1 = strlen(param_1);
  for (local_10 = (uint)sVar1; param_3 < local_10; local_10 = local_10 - 1) {
    param_1[local_10] = param_1[local_10 - 1];
  }
  param_1[param_3] = param_2;
  return;
}



void strdel(char *param_1,uint param_2)

{
  uint uVar1;
  size_t sVar2;
  uint local_10;
  
  sVar2 = strlen(param_1);
  uVar1 = (int)sVar2 - 1;
  for (local_10 = param_2; local_10 < uVar1; local_10 = local_10 + 1) {
    param_1[local_10] = param_1[local_10 + 1];
  }
  param_1[uVar1] = '\0';
  return;
}



int atoi(char *__nptr)

{
  int local_10;
  int local_c;
  
  local_10 = 0;
  for (local_c = 0;
      ((__nptr[local_c] != '\0' && (__nptr[local_c] < ':')) && ('/' < __nptr[local_c]));
      local_c = local_c + 1) {
    local_10 = (int)__nptr[local_c] + local_10 * 10 + -0x30;
  }
  return local_10;
}



int getc(FILE *__stream)

{
  long in_FS_OFFSET;
  byte local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  read(0,&local_11,1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (int)local_11;
}



ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  undefined local_c [4];
  
  local_c[0] = (undefined)__fd;
  sVar1 = write(1,local_c,1);
  return sVar1;
}



int puts(char *__s)

{
  int in_ECX;
  size_t in_RDX;
  size_t extraout_RDX;
  void *in_RSI;
  char *local_10;
  
  local_10 = __s;
  while (*local_10 != '\0') {
    if (*local_10 == '\n') {
      send(0xd,in_RSI,in_RDX,in_ECX);
    }
    send((int)*local_10,in_RSI,(size_t)(local_10 + 1),in_ECX);
    in_RDX = extraout_RDX;
    local_10 = local_10 + 1;
  }
  return 0;
}



void puti(uint param_1,void *param_2,size_t param_3,ulong param_4)

{
  size_t extraout_RDX;
  long in_FS_OFFSET;
  uint local_2c;
  int local_20;
  undefined8 local_1b;
  undefined2 local_13;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1b = 0;
  local_13 = 0;
  local_11 = 0;
  local_2c = param_1;
  for (local_20 = 0; local_20 < 0xb; local_20 = local_20 + 1) {
    param_4 = (ulong)(uint)((int)local_2c % 10);
    *(char *)((long)&local_1b + (long)local_20) = (char)((int)local_2c % 10);
    local_2c = (int)local_2c / 10;
    param_3 = (size_t)local_2c;
    if (local_2c == 0) break;
  }
  for (; -1 < local_20; local_20 = local_20 + -1) {
    send((int)(char)(*(char *)((long)&local_1b + (long)local_20) + '0'),param_2,param_3,(int)param_4
        );
    param_3 = extraout_RDX;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void putx(uint param_1,void *param_2,undefined8 param_3,ulong param_4)

{
  size_t extraout_RDX;
  size_t extraout_RDX_00;
  size_t extraout_RDX_01;
  size_t __n;
  long in_FS_OFFSET;
  uint local_2c;
  byte local_1b;
  undefined8 local_1a;
  undefined2 local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1a = 0;
  local_12 = 0;
  local_1b = 9;
  for (local_2c = param_1; local_2c != 0; local_2c = local_2c >> 4) {
    param_4 = (ulong)(local_2c & 0xf);
    *(char *)((long)&local_1a + (long)(int)(uint)local_1b) = (char)(local_2c & 0xf);
    local_1b = local_1b - 1;
  }
  local_1b = 0;
  puts("0x");
  __n = extraout_RDX;
  for (; local_1b < 10; local_1b = local_1b + 1) {
    if (*(char *)((long)&local_1a + (long)(int)(uint)local_1b) < '\n') {
      send((int)(char)(*(char *)((long)&local_1a + (long)(int)(uint)local_1b) + '0'),param_2,__n,
           (int)param_4);
      __n = extraout_RDX_01;
    }
    else {
      send((int)(char)(*(char *)((long)&local_1a + (long)(int)(uint)local_1b) + '7'),param_2,__n,
           (int)param_4);
      __n = extraout_RDX_00;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void putX(ulong param_1,void *param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  size_t extraout_RDX;
  size_t extraout_RDX_00;
  size_t extraout_RDX_01;
  size_t __n;
  long in_FS_OFFSET;
  ulong local_40;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_20 = 0;
  local_29 = 0xf;
  for (local_40 = param_1; local_40 != 0; local_40 = local_40 >> 4) {
    uVar1 = (uint)local_40 & 0xf;
    param_4 = (ulong)uVar1;
    *(char *)((long)&local_28 + (long)(int)(uint)local_29) = (char)uVar1;
    local_29 = local_29 - 1;
  }
  local_29 = 0;
  puts("0x");
  __n = extraout_RDX;
  for (; local_29 < 0x10; local_29 = local_29 + 1) {
    if (*(char *)((long)&local_28 + (long)(int)(uint)local_29) < '\n') {
      send((int)(char)(*(char *)((long)&local_28 + (long)(int)(uint)local_29) + '0'),param_2,__n,
           (int)param_4);
      __n = extraout_RDX_01;
    }
    else {
      send((int)(char)(*(char *)((long)&local_28 + (long)(int)(uint)local_29) + '7'),param_2,__n,
           (int)param_4);
      __n = extraout_RDX_00;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



int printf(char *__format,...)

{
  char cVar1;
  long lVar2;
  char in_AL;
  char **ppcVar3;
  char **ppcVar4;
  int __flags;
  undefined8 in_RCX;
  undefined4 uVar5;
  size_t in_RDX;
  ulong uVar6;
  size_t extraout_RDX;
  size_t extraout_RDX_00;
  size_t extraout_RDX_01;
  size_t extraout_RDX_02;
  size_t extraout_RDX_03;
  size_t extraout_RDX_04;
  size_t extraout_RDX_05;
  void *in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM6_Da;
  undefined4 in_XMM7_Da;
  char *local_f0;
  uint local_d8;
  char **local_d0;
  char *local_b8;
  void *local_b0;
  size_t local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  uVar5 = (undefined4)((ulong)in_RCX >> 0x20);
  __flags = (int)in_RCX;
  if (in_AL != '\0') {
    local_88 = in_XMM0_Da;
    local_78 = in_XMM1_Da;
    local_68 = in_XMM2_Da;
    local_58 = in_XMM3_Da;
    local_48 = in_XMM4_Da;
    local_38 = in_XMM5_Da;
    local_28 = in_XMM6_Da;
    local_18 = in_XMM7_Da;
  }
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = 8;
  local_d0 = (char **)&stack0x00000008;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  for (local_f0 = __format; *local_f0 != '\0'; local_f0 = local_f0 + 1) {
    if (*local_f0 == '%') {
      local_f0 = local_f0 + 1;
      cVar1 = *local_f0;
      if (cVar1 == 'x') {
        if (local_d8 < 0x30) {
          uVar6 = (ulong)local_d8;
          local_d8 = local_d8 + 8;
          ppcVar4 = (char **)(ulong)local_d8;
          ppcVar3 = (char **)((long)&local_b8 + uVar6);
        }
        else {
          ppcVar4 = local_d0 + 1;
          ppcVar3 = local_d0;
          local_d0 = ppcVar4;
        }
        putx(*(uint *)ppcVar3,in_RSI,ppcVar4,CONCAT44(uVar5,__flags));
        in_RDX = extraout_RDX_00;
      }
      else if (cVar1 < 'y') {
        if (cVar1 == 's') {
          if (local_d8 < 0x30) {
            uVar6 = (ulong)local_d8;
            local_d8 = local_d8 + 8;
            ppcVar4 = (char **)((long)&local_b8 + uVar6);
          }
          else {
            ppcVar4 = local_d0;
            local_d0 = local_d0 + 1;
          }
          puts(*ppcVar4);
          in_RDX = extraout_RDX_02;
        }
        else if (cVar1 < 't') {
          if (cVar1 == 'd') {
            if (local_d8 < 0x30) {
              uVar6 = (ulong)local_d8;
              local_d8 = local_d8 + 8;
              ppcVar4 = (char **)(ulong)local_d8;
              ppcVar3 = (char **)((long)&local_b8 + uVar6);
            }
            else {
              ppcVar4 = local_d0 + 1;
              ppcVar3 = local_d0;
              local_d0 = ppcVar4;
            }
            puti(*(uint *)ppcVar3,in_RSI,(size_t)ppcVar4,CONCAT44(uVar5,__flags));
            in_RDX = extraout_RDX;
          }
          else if (cVar1 < 'e') {
            if (cVar1 == '%') {
              send(0x25,in_RSI,in_RDX,__flags);
              in_RDX = extraout_RDX_03;
            }
            else if (cVar1 == 'X') {
              if (local_d8 < 0x30) {
                uVar6 = (ulong)local_d8;
                local_d8 = local_d8 + 8;
                ppcVar4 = (char **)(ulong)local_d8;
                ppcVar3 = (char **)((long)&local_b8 + uVar6);
              }
              else {
                ppcVar4 = local_d0 + 1;
                ppcVar3 = local_d0;
                local_d0 = ppcVar4;
              }
              putX((ulong)*ppcVar3,in_RSI,ppcVar4,CONCAT44(uVar5,__flags));
              in_RDX = extraout_RDX_01;
            }
          }
        }
      }
    }
    else {
      if (*local_f0 == '\n') {
        send(0xd,in_RSI,in_RDX,__flags);
        in_RDX = extraout_RDX_04;
      }
      send((int)*local_f0,in_RSI,in_RDX,__flags);
      in_RDX = extraout_RDX_05;
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init(param_1);
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)
    ;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void __libc_csu_fini(void)

{
  return;
}



void _fini(void)

{
  return;
}


