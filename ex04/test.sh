#!/bin/bash
make re
./replace.out normal.txt hello hoi
echo
echo output:
cat normal.txt.replace
rm normal.txt.replace
make resan
./replace.out normal.txt hello hoi
echo
echo output:
cat normal.txt.replace
rm normal.txt.replace
