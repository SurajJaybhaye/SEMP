#!/bin/bash

function create_vcard {
cat << EOM
NAME:$one
AGE:$two
GENDER:$three
TEL;TYPE=CELL:$four
EOM
}

OUT=data.vcard
## if OUT already exists then rename
if [[ -e ${OUT} ]] ; then mv ${OUT} ${OUT}.last ; fi

echo "BEGIN:VCARD" >> ${OUT}
echo "VERSION:3.0" >> ${OUT}

while IFS=, read -r one two three four; do 
    create_vcard >> ${OUT}
	
done < contact.csv

