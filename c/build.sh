#!/bin/bash

BUILD_DIR=build
OUTPUT_NAME=russianroulette-c
BUILD_FAILED=0

gcc -c game.c -o $BUILD_DIR/game.o  # build game
if [ $? -ne 0 ]; then  
    echo "Error building game.o"
	BUILD_FAILED=1
fi

gcc -c main.c -o $BUILD_DIR/main.o  # build main
if [ $? -ne 0 ]; then
    echo "Error building main.o"
	BUILD_FAILED=1
fi

gcc $BUILD_DIR/game.o $BUILD_DIR/main.o -o $BUILD_DIR/$OUTPUT_NAME  # link executable
if [ $? -ne 0 ]; then
    echo "Error linking ELF"
	BUILD_FAILED=1
fi

# delete useless files
rm $BUILD_DIR/game.o
rm $BUILD_DIR/main.o

# warn the user if build fails
if [ $BUILD_FAILED -eq 1 ]; then
	echo "Building failed! Check the output and report it on github if you feel like it lol"
else
	echo "Done! cd into $BUILD_DIR/ and run ./$OUTPUT_NAME"
fi
