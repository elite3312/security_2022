unsigned __int64 __fastcall get_line(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  char v4; // [rsp+1Bh] [rbp-15h]
  _BYTE v5[12]; // [rsp+1Ch] [rbp-14h]
  unsigned __int64 v6; // [rsp+28h] [rbp-8h]

  puts(a1);
  *(_DWORD *)&v5[8] = 0;
  v6 = 0LL;
  *(_QWORD *)v5 = (unsigned int)strlen(a1);
  while ( 1 )
  {
    v4 = getc();
    if ( v4 == 10 )
      break;
    if ( v6 <= 0x1FF )
    {
      v3 = (*(_QWORD *)&v5[4])++;
      strins(a2, (unsigned int)v4, v3);
      ++v6;
    }
  }
  *(_BYTE *)(a2 + v6) = 0;
  return v6;
}