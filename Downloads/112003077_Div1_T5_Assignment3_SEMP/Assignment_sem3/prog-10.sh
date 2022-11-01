#!/bin/bash
i=2000
count=0
echo "10 Leap years from year 2000 are:"
while [ $count -lt 10 ]
do
	if [ `expr $i % 4` -eq 0 ]
	then
		((count=count+1))
		echo "$i"
	fi
	((i=i+1))
done
