echo "input the selling price"
read sellingp
echo "input the cost price"
read costp

if [ $costp -gt $sellingp ]
then
s=$((costp - sellingp))
echo "loss of rs:$s"
else
s=$((sellingp - costp))
echo "profit of rs:$s"
fi
