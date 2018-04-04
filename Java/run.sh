#!/usr/bin/env bash

PROGRAM_NAME=$1
RES="class"

echo $PROGRAM_NAME
echo $RES


echo "Compiling"
echo "======================"
# compiling the program
javac -d $RES "$PROGRAM_NAME.java"

echo "Output"
echo "======================"
# loading the program
java -cp $RES $PROGRAM_NAME

