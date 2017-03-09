#!/bin/sh
ldapsearch -Q -LLL sn="*bon*" | grep "sn: " | sed "s/sn: //g" | wc -l | tr -d ' '
