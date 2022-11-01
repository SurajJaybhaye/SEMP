#!/bin/bash

echo "Enter the directory name"
read dirname

if [ -e $dirname ];
then
	echo "Directory already exists"

else
	mkdir $dirname

fi

