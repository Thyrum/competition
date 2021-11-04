Programming Competition Cheat Sheet
===================================

This repository contains usefull algorithms and utility scripts for programming
competitions.

Content
-------

### setup

This folder contains a setup script which automatically creates folders for all
exercises, containing the `name.cpp` and `name.py` templates, and a `Makefile`
with support for automated testing. Tests should be added in the subfolder
`tests`. Each test consists of a input file `<name>.in` and a matching output
file `<name>.out`. In order to test the `cpp` file, run `make cpp` (or simply
`make`), to test the `py` file, run `make py`.


### cpp

This folder contains usefull `c++` scripts (like dijkstra) and is intended as a
place to copy code from.
