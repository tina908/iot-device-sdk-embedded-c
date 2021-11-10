all: a.out

a.out: hello.c
	gcc -Wall -ansi -pedantic hello.c
