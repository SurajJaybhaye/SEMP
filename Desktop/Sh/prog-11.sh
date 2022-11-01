#!/bin/bash
echo Enter the string
read s
echo $s>temp
rvs="$(rev temp)"
if [ $s = $rvs ]
then
echo "Input string is a palindrome"
else
echo " Input string is not a Palindrome"
fi
