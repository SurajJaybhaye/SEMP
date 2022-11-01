#!/bin/bash


printf "cat\ndog\nbear\nhello\nelephant\nhello\ntiger\nhorse\n" > new.txt

echo "Original file is "
echo 
while read line
do
	echo $line

done < new.txt

echo
grep -v "hello" new.txt > tmpfile && mv tmpfile new.txt
echo "File after deleting word hello is"
echo

while read line 
do
	echo $line

done < new.txt
