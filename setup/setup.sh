#!/bin/bash

for d in {A..B}; do
	mkdir -p $d/tests
	sed -e "s|NAME|$d|g" < Makefile > "$d/Makefile"
	sed -e "s|NAME|$d|g" < name.cpp > "$d/$d.cpp"
	sed -e "s|NAME|$d|g" < name.py > "$d/$d.py"
done
