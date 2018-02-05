#! /bin/sh
ldapsearch -LLLQ "uid=z*" cn | grep "^cn:" | cut -d ' ' -f 2 | sort -rn

