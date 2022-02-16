#!/bin/sh

trap 'unset TIME; printf "\n"; exit' INT

TIME=0

printf "\033[2J\033[1;1H"

while :; do
	printf "\033[1;1H"
	printf "Seconds since this script began running: %i\n" $TIME
	TIME=$((TIME+1))
	sleep 1
done
