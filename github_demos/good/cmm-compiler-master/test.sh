#!/bin/bash

parser=parser

for file in $@; do
	result=${file%.cmm}.out
	echo testing $file
	./$parser $file > $result
done
