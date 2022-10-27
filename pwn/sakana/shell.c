void __noreturn shell()
{
  while ( 1 )
  {
    get_line("~> ", &cmd);
    parse_cmd();
    memset(&cmd, 0LL, 512LL);
  }
}