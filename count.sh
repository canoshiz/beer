#!/bin/sh
# These values are adjustable; change them to your liking
rows=1
maxr=26
cols=4
maxc=98
intc=$cols

# Count the rows on the screen
while [ "$rows" -le "$maxr" ]; do

	# Add preceding 0s to integers less than 10
	if [ "$rows" -lt "10" ]; then
		printf "0"
	fi

	printf "%i" $rows

	# Add newlines as appropriate
	if [ "$rows" -lt "$maxr" ]; then
		printf "\n"
	else
		printf " "
	fi

	rows=$((rows+1))

done

# Count the columns on the screen
while [ "$cols" -le "$maxc" ]; do

	printf "%i" $intc
	cols=$((cols+1))
	intc=$((intc+1))

	# Print 0s instead of 10s
	if [ "$intc" = "10" ]; then
		intc=0
	fi

done

# Add newline after execution
printf "\n"
