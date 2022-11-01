#!/bin/bash
echo "Enter your marks"
read num
case $num in
 100 | [9][0-9] | [8][0-9] )
 echo "Your grade is DIV 1 "
 ;;
 [6][0-9] | [7][0-9])
 echo "Your grade is DIV 2 "
 ;;
 [4][0-9] | [5][0-9] )
 echo "Your grade is DIV 3 "
 ;;
 *)
 echo "fail"
 ;;
 esac
