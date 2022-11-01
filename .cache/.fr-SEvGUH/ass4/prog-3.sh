#!/bin/bash

echo "Enter the file name"
read filname

if [ -e $filname ];
then
	while read line
	do
		echo "$line"

	done < $filname
else
	echo "File does not exist"

fi

