#!/bin/bash
make re
./harlFilter.out DEBUG
echo
./harlFilter.out INFO
echo
./harlFilter.out WARNING
echo
./harlFilter.out ERROR
echo
./harlFilter.out gibbirish
echo
