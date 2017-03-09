#!/bin/sh
ldapsearch -Q -LLL "(uid=z*)" | grep "^cn:*" | sed "s/cn: //g" | sort -rf | grep --invert-match "^$"
