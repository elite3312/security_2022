typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
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

typedef long __time_t;

typedef uint __useconds_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

struct evp_pkey_ctx_st {
};

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

typedef __time_t time_t;

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

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
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




void _init(void)

{
  __gmon_start__();
  return;
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



void seccomp_init(void)

{
  seccomp_init();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = putchar(__c);
  return iVar1;
}



void seccomp_rule_add(void)

{
  seccomp_rule_add();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



void seccomp_load(void)

{
  seccomp_load();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void srand(uint __seed)

{
  srand(__seed);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = time(__timer);
  return tVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  
  iVar1 = setvbuf(__stream,__buf,__modes,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void exit(int __status)

{
                    // WARNING: Subroutine does not return
  exit(__status);
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = usleep(__useconds);
  return iVar1;
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



// WARNING: Removing unreachable block (ram,0x001012a3)
// WARNING: Removing unreachable block (ram,0x001012af)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x001012e4)
// WARNING: Removing unreachable block (ram,0x001012f0)

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



int init(EVP_PKEY_CTX *ctx)

{
  int extraout_EAX;
  time_t tVar1;
  
  setvbuf(stdin,(char *)0x0,2,0);
  setvbuf(stdout,(char *)0x0,2,0);
  setvbuf(stderr,(char *)0x0,2,0);
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  return extraout_EAX;
}



void init_seccomp(void)

{
  ctx = seccomp_init(0);
  seccomp_rule_add(ctx,0x7fff0000,0x101,0);
  seccomp_rule_add(ctx,0x7fff0000,0,0);
  seccomp_rule_add(ctx,0x7fff0000,1,0);
  seccomp_rule_add(ctx,0x7fff0000,0xe7,0);
  seccomp_rule_add(ctx,0x7fff0000,0xe6,0);
  seccomp_load(ctx);
  return;
}



void end(void)

{
  int local_10;
  int local_c;
  
  usleep(1000000);
  for (local_10 = 0; local_10 < 0x1e; local_10 = local_10 + 1) {
    putchar(10);
  }
  usleep(200000);
  puts("Daphnia\t\t\tHitori Gotou");
  usleep(200000);
  puts("Drummer\t\t\tNijika Ijichi");
  usleep(200000);
  puts("Bass\t\t\tRyou Yamada");
  usleep(200000);
  puts("Guitar man\t\tGuitar man");
  for (local_c = 0; local_c < 0x14; local_c = local_c + 1) {
    usleep(200000);
    putchar(10);
  }
                    // WARNING: Subroutine does not return
  exit(0);
}



void show_yt_status(void)

{
  puts("channel name : guitarhero");
  printf("total videos : %d\n",(ulong)total_video);
  printf("subscribers : %d\n",(ulong)subscriber);
  return;
}



void upload(void)

{
  puts("video name:");
  memset(video_name,0,0x20);
  read(0,video_name,0x1f);
  puts("upload completed.");
  total_video = total_video + 1;
  subscriber = subscriber + 10;
  upload_time = 0;
  viewers = 0;
  return;
}



void show_video(void)

{
  int iVar1;
  
  if (video_name[0] == '\0') {
    puts("No video had been uploaded.");
  }
  else {
    iVar1 = rand();
    upload_time = upload_time + iVar1 % 0x17 + 1;
    iVar1 = rand();
    viewers = viewers + iVar1 % 0x32;
    puts(
        "--------------------------------------------------------------------------------------------------"
        );
    puts(
        "|                                                                                                |"
        );
    puts(
        "|                                                                                                |"
        );
    puts(
        "|                                        ,,,,~,,,,,                                              |"
        );
    puts(
        "|                                  ,+\'\'`            \'\'\'!,                                        |"
        );
    puts(
        "|                            +\'\'L|\'                       \'L                                     |"
        );
    puts(
        "|                        ,,|`    \'L                         \'!,                                  |"
        );
    puts(
        "|                   ,i\'    \'|    |\'                           \'|                                 |"
        );
    puts(
        "|                  l     l\'\'\'\'||`                               \'                                |"
        );
    puts(
        "|                 |   ;\' L     |                                 l                               |"
        );
    puts(
        "|                 L  !   L,,   !      ~     , L          L        ;                              |"
        );
    puts(
        "|                 L |    |           |     ,L L          |      | \'L                             |"
        );
    puts(
        "|                 L |    !           |     |  |          Ll    ,L  |                             |"
        );
    puts(
        "|                 \' |   |   ,L|      |     \'L !L    |    L |   |   L                             |"
        );
    puts(
        "|                  \'|  |`  |` !     |`\'     \'  \'L   l    L |   |   L                             |"
        );
    puts(
        "|                     ,L   |L|L     |  !,,,  ,,               ,L  ,`                             |"
        );
    puts(
        "|                     !     \'|L     |                 \'\'>==>\' |   |                              |"
        );
    puts(
        "|                    !        |     |                        |   |L                              |"
        );
    puts(
        "|                   |         lL    |                        |   |                               |"
        );
    puts(
        "|                  |           \'L    |L,,       \'^=\'\'      ,|`  |L           |                   |"
        );
    puts(
        "|                 |`                 ,|\' \'\'!;=,,,,,,,,,,+i\'|    |       !L\'`,|||                 |"
        );
    puts(
        "|                 |                 ;L,     |\'\'\'||||L      |    \'       ,||||||||                |"
        );
    puts(
        "|                 |                i\' |      | ,|||\'||L    L     ,,+\'\'\'| ||||||||\'               |"
        );
    puts(
        "|                 |               |L,,|      \'|\'       \'l  |L>lL\'\'l|\'=\'l\' \',  L |!               |"
        );
    puts(
        "|                 \'L     |l      ,||\' |LLl\'\'\'\'L    ++,,=|l!        \'|      `                     |"
        );
    puts(
        "|                  \'l    |Ll,   i|\'      |    l,,||l||||||L        ,!                            |"
        );
    puts(
        "|                    \'!   l  lL;||       |L   \'|l|!|!|||l\'lL,    ,;L                             |"
        );
    puts(
        "|                              ||||||||||||    \'\'l||||||lL,  \'l\'\'\'                               |"
        );
    puts(
        "|                              l|L|||||||l`       lLL|||||lL                                     |"
        );
    puts(
        "|                             lll|L||||  l        lL\'lLL|lL                                      |"
        );
    puts(
        "|                             llLlll||||||lL,   ,lllll                                           |"
        );
    puts(
        "|                            l|lL   \'lL|||||lll\'\'\'   jL                                          |"
        );
    puts(
        "--------------------------------------------------------------------------------------------------"
        );
    printf(video_name);
    if (upload_time == 1) {
      printf("\n%d views   %d hour ago\n",(ulong)viewers,1);
    }
    else if ((int)upload_time < 0x19) {
      printf("\n%d views   %d hours ago\n",(ulong)viewers,(ulong)upload_time);
    }
    else {
      iVar1 = (int)upload_time >> 0x1f;
      if ((int)upload_time < 0x31) {
        printf("\n%d views   %d day ago\n",(ulong)viewers,
               (ulong)(uint)(((int)upload_time / 6 + iVar1 >> 2) - iVar1));
      }
      else if ((int)upload_time < 0x2d1) {
        printf("\n%d views   %d days ago\n",(ulong)viewers,
               (ulong)(uint)(((int)upload_time / 6 + iVar1 >> 2) - iVar1));
      }
      else if ((int)upload_time < 0x5a1) {
        printf("\n%d views   %d month ago\n",(ulong)viewers,(ulong)(uint)((int)upload_time / 0x2d0))
        ;
      }
      else if ((int)upload_time < 0x21c1) {
        printf("\n%d views   %d months ago\n",(ulong)viewers,(ulong)(uint)((int)upload_time / 0x2d0)
              );
      }
      else if ((int)upload_time < 0x4381) {
        printf("\n%d views   %d year ago\n",(ulong)viewers,(ulong)(uint)((int)upload_time / 0x21c0))
        ;
      }
      else {
        printf("\n%d views   %d years ago\n",(ulong)viewers,(ulong)(uint)((int)upload_time / 0x21c0)
              );
      }
    }
    puts("");
    puts(&DAT_00102e40);
    puts(&DAT_00102eb0);
    puts(&DAT_00102f20);
    puts("");
  }
  return;
}



void omedetou(void)

{
  int __fd;
  long in_FS_OFFSET;
  undefined local_1018 [4104];
  undefined8 local_10;
  
  local_10 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  __fd = open("omedetou.txt",0);
  if (__fd == -1) {
    puts("Cannot read file!\nExiting...");
                    // WARNING: Subroutine does not return
    exit(-1);
  }
  memset(local_1018,0,0x1000);
  read(__fd,local_1018,0x1000);
  printf("%s",local_1018);
                    // WARNING: Subroutine does not return
  exit(0);
}



undefined8 main(EVP_PKEY_CTX *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  char local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  init(param_1);
  init_seccomp();
  puts(
      "You are a shy, gloomy high-schooler who started learning guitar after seeing rock bands on TV."
      );
  puts("Try to record guitar covers and post them to your YouTube channel.");
  do {
    if (action == 0) {
      end();
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
                    // WARNING: Subroutine does not return
      __stack_chk_fail();
    }
    if (999999 < subscriber) {
      omedetou();
    }
    puts("-------------------------------------------------------");
    puts("What do you want to do?");
    if (action == 1) {
      printf("You have %d action.\n",1);
    }
    else {
      printf("You have %d actions.\n",(ulong)action);
    }
    puts("1. show YT channel status");
    puts("2. upload video");
    puts("3. show latest video");
    puts("-------------------------------------------------------");
    printf("> ");
    read(0,local_28,0xf);
    iVar1 = atoi(local_28);
    if (iVar1 == 3) {
      show_video();
    }
    else {
      if (3 < iVar1) {
LAB_00101c9f:
                    // WARNING: Subroutine does not return
        exit(0);
      }
      if (iVar1 == 1) {
        show_yt_status();
      }
      else {
        if (iVar1 != 2) goto LAB_00101c9f;
        upload();
      }
    }
    action = action - 1;
  } while( true );
}



void __libc_csu_init(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _init();
  lVar1 = 0;
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])(param_1,param_2,param_3);
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


