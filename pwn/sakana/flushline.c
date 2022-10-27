
__int64 __fastcall flush_line(int a1, int a2, int a3, char a4)
{
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v12; // [rsp+0h] [rbp-20h]

  puts("\x1B[2K\r");
  printf((unsigned int)"%s%s", a1, a2, v4, v5, v6, a4);
  return printf((unsigned int)"%s%dG", (unsigned int)"\x1B[", a3 + v12 + 1, v7, v8, v9, v12);
}