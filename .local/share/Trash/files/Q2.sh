echo "Enter Number: "
read no
for((i=2; i<=$no; i++))
do
  ans=$(( no%i ))
  if [ $ans -eq 0 ]
  then
    echo "$no is a prime number."
    exit 0
  fi
done
echo "$no is not a prime number."

