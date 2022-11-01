#!/bin/bash
find . -mtime -20 -exec ls -lh -S {} \; > a.txt
head -11 a.txt > last20.txt
rm a.txt
