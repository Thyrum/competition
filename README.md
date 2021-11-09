Programming Competition Cheat Sheet
===================================

This repository contains usefull algorithms and utility scripts for programming
competitions.

For a tcr (team contest reference), have a look at
[this one](https://github.com/ludopulles/tcr) (which inspired some of the code
in this repository).

Content
-------

### setup

In order to setup for a contest, first edit the script `setup.sh` so that the
brace expansion `{A..L}` matches the available exercises. Running the script
then generates a folder for each exercise, containing a copy of `name.cpp`,
`name.py` and `Makefile` (with `name` replaced by the exercise name everywhere).
A subfolder `tests` is also created for every exercise.

The makefile provided can be used to automatically compile and test `cpp` and
`python` code. Simply run `make cpp` or `make py` after putting the test files
(with extenstions `.in` and `.out`) in the corresponding `tests` folder.


### cpp

This folder contains usefull `c++` scripts (like dijkstra) and is intended as a
place to copy code from.
