echo "Enter Two numbers : "
read a 
read b 

echo "Enter Choice :"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
read choice 
 
case $choice in
  1)ans=`echo $a + $b | bc` 
  ;; 
  2)ans=`echo $a - $b | bc` 
  ;; 
  3)ans=`echo $a \* $b | bc` 
  ;; 
  4)ans=`echo "scale=2; $a / $b" | bc` 
  ;; 
esac
echo "Result : $ans" 
