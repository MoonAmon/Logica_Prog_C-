#!/bin/bash

echo -n "Digite o número do contador: "
read count

for ((i=1;i<=20;i++)); do
    echo "Count: $i"
done
