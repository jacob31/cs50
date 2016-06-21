# file name: Makefile
# author: Ben Silbernagel
# created: winter 2015-2016
# class: Introduction to Computer Science, by Harvard University
# purpose: make file for find

all: find generate

find: find.c helpers.c helpers.h
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o find find.c helpers.c -lcs50 -lm

generate: generate.c
	clang -ggdb3 -O0 -std=c11 -Wall -Werror -o generate generate.c

clean:
	rm -f *.o a.out core find generate