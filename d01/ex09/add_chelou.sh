echo $FT_NBR1 + $FT_NBR2 | tr "\'\"\?\!" "0234" | sed 's/\\/1/g' | tr "mrdoc" "01234" | xargs echo "ibase=5; obase=D;" | bc | tr "0123456789ABC" "gtaio luSnemf"
