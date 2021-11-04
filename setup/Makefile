CXXFLAGS=-Wall -O2 -ggdb
TESTS=$(wildcard tests/*.in)

all: cpp
	
cpp: EXEC=./NAME
cpp: NAME

py: EXEC=python3 NAME.py
	
.PHONY: cpp py
py cpp: $(TESTS)
	@if [ -n "$(TESTS)" ]; then \
		for file in "$(TESTS)"; do \
			$(EXEC) < $$file > mine ;\
			diff -sy mine $$(echo "$$file" | sed -e 's/\.in$$/.out/g') || echo "FAILED $$file" ;\
		done; \
	fi

NAME: NAME.cpp

clean:
	@$(RM) NAME mine
