#!/bin/bash
# initialize array, count, and sum
my_array=(1 2 3)
count=0
sum=0
for i in ${!my_array[@]}; do
    echo ${my_array[$i]}
    count=$(($count+1))
    sum=$(($sum+${my_array[$i]}))
done
echo "Contagem: $count"
echo "Soma: $sum"