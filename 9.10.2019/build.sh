#!/bin/bash

compile() {
	filename=$(basename -- "$1")
	extension="${filename##*.}"
	filename="${filename%.*}"
	g++ $1 -o $filename
}

if [ $# -eq 0 ]; then

	for file in *.cpp
	do
		echo "Compiling $file file..."
		compile $file
		echo "Done!"
	done
else
	for file in $@
	do
		echo "Compiling $file file..."
		compile $file
		echo "Done!"
	done
fi
	
