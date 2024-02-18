#!/bin/bash

# ' = 0
# \ = 1
# " = 2
# ? = 3
# ! = 4

#M = 0
#R = 1
#D = 2
#O = 3
#C = 4

FT_NBR1=$(cat $1)
FT_NBR2=$(cat $2)

echo $FT_NBR1 + $FT_NBR2 | sed 's/\\/1/g' | sed 's/?/3/g' | sed 's/!/4/g' | sed "s/\'/0/g" | sed "s/\"/2/g" 
#| tr "mrdoc" "01234" | xargs echo "ibase=5; obase=23;" | bc | tr "0123456789ABC" "gtaio luSnemf"

