#!/bin/sh
ifconfig | grep "ether" | grep -o "\<..:..:..:..:..:..\>"
