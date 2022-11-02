
undefined8 main(void)

{
  banner();
  shell();
  return 0;
}

void banner(void)

{
  sakana();
  puts("Welcome to fish, the friendly interactive shell!\n");
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

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  undefined local_c [4];
  
  local_c[0] = (undefined)__fd;
  sVar1 = write(1,local_c,1);
  return sVar1;
}

void shell(void)

{
  do {
    get_line(&DAT_00105b49,cmd);
    parse_cmd();
    memset(cmd,0,0x200);
  } while( true );
}



ulong get_line(FILE *prompt,FILE *cmd)
//this is the function that prints a ~>
{
  int curr_char;
  long insert_index;
  ulong curr_char_len;
  
  puts((char *)prompt);//~> 
  insert_index = 0;
  curr_char_len = 0;
  strlen((char *)prompt);
  while( true ) {
    curr_char = getc(prompt);
    if ((char)curr_char == '\n') break;
    if (curr_char_len < 0x200) {//if the line is less than 512 chars
      prompt = cmd;//the promt now points to the command
      strins(cmd,(int)(char)curr_char,insert_index); 
      curr_char_len = curr_char_len + 1;
      insert_index = insert_index + 1;
    }
  }
  *(undefined *)((long)&cmd->_flags + curr_char_len) = 0;
  return curr_char_len;
}


size_t strlen(char *target_string)

{
  char *char_ptr;
  uint _curr_len;
  
  _curr_len = 0;
  char_ptr = target_string;
  while (*char_ptr != '\0') {
    _curr_len = _curr_len + 1;
    char_ptr = char_ptr + 1;
  }
  return (ulong)local_c;
}


int getc(FILE *__stream)

{
  long in_FS_OFFSET;
  byte local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  read(0,&local_11,1);//read one(1) byte from file descriptor(0) fd into buff(local_11)
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)local_11;
}


void strins(char *target,char char_to_insert,ulong target_index)//strins - insert a char at index char_to_insert

{
  size_t len_target;
  uint i;
  
  len_target = strlen(target);
  for (i = (uint)len_target; target_index < i; i = i - 1) {
    target[i] = target[i - 1];
  }
  target[target_index] = char_to_insert;
  return;
}


void parse_cmd(void)

{
  int str_cmp_result;
  size_t len_of_cmd;
  long in_FS_OFFSET;
  char printf_buffer [264];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  len_of_cmd = strlen(cmd);
  if ((int)len_of_cmd != 0) {
    trim(cmd);
    str_cmp_result = strcmp(cmd,"help");
    if (str_cmp_result == 0) {
      puts(
          "help\t\t: print this help menu.\nsakana\t\t: sakana~\nchinanago\t: chinanago~\nexit\t\t:  terminate shell.\nclear\t\t: clear screen.\n"
          );
    }
    else {
      str_cmp_result = strcmp(cmd,"printf");
      if (str_cmp_result == 0) {
        memset(printf_buffer,0,0x100);//256
        get_line(&DAT_00105adf,printf_buffer);
        printf(printf_buffer);
      }
      else {
        str_cmp_result = strcmp(cmd,"clear");
        if (str_cmp_result == 0) {
          puts("\x1b[2J\x1b[H");
        }
        else {
          str_cmp_result = strcmp(cmd,"exit");
          if (str_cmp_result == 0) {
                    /* WARNING: Subroutine does not return */
            _exit(1);
          }
          str_cmp_result = strcmp(cmd,"sakana");
          if (str_cmp_result == 0) {
            sakana();
          }
          else {
            str_cmp_result = strcmp(cmd,"chinanago");
            if (str_cmp_result == 0) {
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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


int printf(char *format_input,...)

{
  char char_after_percent;
  long lVar2;
  char in_AL;
  char **ppcVar3;
  int __flags;
  undefined8 in_RCX;
  size_t in_RDX;
  size_t extraout_RDX;
  size_t extraout_RDX_00;
  size_t extraout_RDX_01;
  ulong uVar4;
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
  char *curr_char_ptr;
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
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);//40
  local_d8 = 8;
  local_d0 = (char **)&stack0x00000008;
  local_b0 = in_RSI;
  local_a8 = in_RDX;
  local_a0 = in_RCX;
  local_98 = in_R8;
  local_90 = in_R9;
  for (curr_char_ptr = format_input; *curr_char_ptr != '\0'; curr_char_ptr = curr_char_ptr + 1) {
    if (*curr_char_ptr == '%') {
      curr_char_ptr = curr_char_ptr + 1;
      char_after_percent = *curr_char_ptr;
      if (char_after_percent == 'x') {
        if (local_d8 < 0x30) {///48
          local_d8 = local_d8 + 8;
        }
        else {
          local_d0 = local_d0 + 1;
        }
        putx();
        in_RDX = extraout_RDX_00;
      }
      else if (char_after_percent < 'y') {
        if (char_after_percent == 's') {
          if (local_d8 < 0x30) {//
            uVar4 = (ulong)local_d8;
            local_d8 = local_d8 + 8;
            ppcVar3 = (char **)((long)&local_b8 + uVar4);
          }
          else {
            ppcVar3 = local_d0;
            local_d0 = local_d0 + 1;
          }
          puts(*ppcVar3);
          in_RDX = extraout_RDX_02;
        }
        else if (char_after_percent < 't') {
          if (char_after_percent == 'd') {
            if (local_d8 < 0x30) {//48
              local_d8 = local_d8 + 8;
            }
            else {
              local_d0 = local_d0 + 1;
            }
            puti();
            in_RDX = extraout_RDX;
          }
          else if (char_after_percent < 'e') {
            if (char_after_percent == '%') {
              send(0x25,in_RSI,in_RDX,__flags);
              in_RDX = extraout_RDX_03;
            }
            else if (char_after_percent == 'X') {
              if (local_d8 < 0x30) {
                local_d8 = local_d8 + 8;
              }
              else {
                local_d0 = local_d0 + 1;
              }
              putX();
              in_RDX = extraout_RDX_01;
            }
          }
        }
      }
    }
    else {
      if (*curr_char_ptr == '\n') {
        send(0xd,in_RSI,in_RDX,__flags);
        in_RDX = extraout_RDX_04;
      }
      send((int)*curr_char_ptr,in_RSI,in_RDX,__flags);
      in_RDX = extraout_RDX_05;
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
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
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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


