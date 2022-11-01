echo "Enter marks out of 100:"
read marks

if  test $marks -gt 75 || test $marks -eq 75
then
	echo "I Division"
elif test $marks -gt 60 || test $marks -eq 60
then
	echo "II Division"
elif test $marks -gt 50 || test $marks -eq 50
then
	echo "III Division"
else
	echo "Fail"
fi
