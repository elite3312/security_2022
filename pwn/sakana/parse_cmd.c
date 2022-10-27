unsigned __int64 parse_cmd()
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  char v9[264]; // [rsp+0h] [rbp-110h] BYREF
  unsigned __int64 v10; // [rsp+108h] [rbp-8h]

  v10 = __readfsqword(0x28u);
  if ( (unsigned int)strlen(&cmd) )
  {
    trim(&cmd);
    if ( !(unsigned int)strcmp(&cmd, "help") )
    {
      puts(
        "help\t\t: print this help menu.\n"
        "sakana\t\t: sakana~\n"
        "chinanago\t: chinanago~\n"
        "exit\t\t: terminate shell.\n"
        "clear\t\t: clear screen.\n");
    }
    else if ( !(unsigned int)strcmp(&cmd, "printf") )
    {
      memset(v9, 0LL, 256LL);
      get_line((__int64)&unk_5ADF, (__int64)v9);
      printf((unsigned int)v9, (unsigned int)v9, v0, v1, v2, v3, v9[0]);
    }
    else if ( !(unsigned int)strcmp(&cmd, "clear") )
    {
      puts("\x1B[2J\x1B[H");
    }
    else
    {
      if ( !(unsigned int)strcmp(&cmd, "exit") )
        _exit(1);
      if ( !(unsigned int)strcmp(&cmd, "sakana") )
      {
        sakana();
      }
      else if ( !(unsigned int)strcmp(&cmd, "chinanago") )
      {
        chinanago();
      }
      else
      {
        printf(
          (unsigned int)"%s: command not found\nRun 'help' for usage.\n",
          (unsigned int)&cmd,
          v4,
          v5,
          v6,
          v7,
          v9[0]);
      }
    }
  }
  return __readfsqword(0x28u) ^ v10;
}