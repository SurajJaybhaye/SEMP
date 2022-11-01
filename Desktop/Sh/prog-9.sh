#!/bin/bash

echo "Enter File name:"
read fileName

if [ -e "$fileName" ]
then
    echo "Hello World!!" > "$fileName"
    cat "$fileName"
else
    echo "Hello World!!" >> "$fileName"
    cat "$fileName"
fi
