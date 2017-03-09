#!/bin/sh
ldapwhoami -Q | sed "s/^dn://g"

