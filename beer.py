#!/bin/python3
count = "bottles"
for i in list(range(99,0,-1)):
	if i == 1:
		count = "bottle"
	if i != 99:
		print(i, count, "of beer on the wall")
		print()
	print(i, count, "of beer on the wall,")
	print(i, count, "of beer")
	print()
	print("Take one down, pass it around,")
else:
	print("no more bottles of beer on the wall")
	print()
	print("Go to the store and buy some more,")
	print("99 bottles of beer on the wall")
