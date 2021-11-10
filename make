a.out : hello.o
	gcc -o a.out hello.o
hello.o : hello.c
	gcc -c -o hello.o hello.c

clean:
	rm *.o a.out

