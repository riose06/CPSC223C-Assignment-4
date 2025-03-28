#!/bin/bash

# Author: Ethan Rios
# CWID: 880071006
# Email: eirios@csu.fullerton.edu
# Due: February 26 @ 11:59pm
# CPSC 223C Assignment 2 - String Search

# PURPOSE: 

echo "Remove unnecessary files"
rm -f main.o main.out

echo "Compile main.c"
gcc -Wall -m64 -no-pie -o main.out main.c -std=c17 -fno-use-linker-plugin

# Make sure the executable has permission to execute
chmod a+x r.sh
chmod a+x main.out

echo "Run the program Binary Files:"
./main.out

echo "The script file will terminate"