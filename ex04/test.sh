#!/bin/bash
make
./replace.out normal.txt hello hoi
echo
echo output:
cat normal.txt.replace
rm normal.txt.replace
