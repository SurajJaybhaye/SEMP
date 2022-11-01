#!/bin/bash

echo "Enter the name of first file"
read fil1
echo "Enter the name of second file"
read fil2

cmp -s $fil1 $fil2
x=$?

if [ $x -eq 1 ]
then 
	echo "$fil1 and $fil2 don't have same content"

elif [ $x -eq 0 ]
then
	echo "$fil1 and $fil2 do have same content"

else
	echo "An error occured"

fi
