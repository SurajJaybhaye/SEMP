echo "Enter three numbers:"
read first_num
read second_num
read third_num

if test $first_num -gt $second_num && test $first_num -gt $third_num
then
	echo $first_num is the largest number.
elif test $second_num -gt $third_num
then
	echo $second_num is the largest number.
else
	echo $third_num is the largest number.
fi
