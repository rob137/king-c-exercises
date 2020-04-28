#!/bin/bash

# Runs most recently edited C file
FILENAME=$(ls -t | head -n 1 | sed 's/\.c//')
gcc "$FILENAME".c -o "$FILENAME"
./"$FILENAME"
rm "$FILENAME"
