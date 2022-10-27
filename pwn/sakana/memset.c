__int64 __fastcall memset(_BYTE *a1, char a2, unsigned __int64 a3)
{
  _BYTE *v3; // rax
  __int64 result; // rax
  int i; // [rsp+1Ch] [rbp-Ch]

  for ( i = 0; ; ++i )
  {
    result = i;
    if ( a3 <= i )
      break;
    v3 = a1++;
    *v3 = a2;
  }
  return result;
}