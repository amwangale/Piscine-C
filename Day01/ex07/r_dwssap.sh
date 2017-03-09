#!/bin/sh

# FT_LINE1=8
# FT_LINE2=16

A="$((${FT_LINE2}-1))"
B="$((${FT_LINE2}-${FT_LINE1}+1))"

cat /etc/passwd | grep -v "^#" | sed -n 'n;p' | cut -d : -f 1 | rev | sort -r | head -n $A | tail -n $B | tr "\n" "," | sed "s/,/, /g" | sed "s/, $/./" | tr -d '\n'
