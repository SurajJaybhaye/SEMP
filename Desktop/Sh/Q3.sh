echo "Enter a number:"
read no
if [  $((no % 2)) == 0 ]
then
	echo "$no is even"
else
	echo "$no is Odd"
fi
