#!/bin/sh

count() {
	printf "$i bottle"
	if [ "$i" -gt "1" ]; then printf "s"; fi
}

for i in $(seq 99 -1 0); do
	if [ ! "$i" -eq "0" ]; then
		if [ ! "$i" -eq "99" ]; then
			echo "$(count) of beer on the wall"
			echo
		fi
		echo "$(count) of beer on the wall,"
		echo "$(count) of beer"
		echo
		echo "Take one down, pass it around,"
	else
		echo "no more bottles of beer on the wall"
		echo
		echo "Go to the store and buy some more,"
		echo "99 bottles of beer on the wall"
		unset count
	fi
done
