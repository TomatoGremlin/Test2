CC=gcc
.PHONY: all
all:program
main.o: main.c comparators.h
	$(CC) -c main.c -o main.o

hello.o: comparators.c
	$(CC) -c comparators.c -o comparators.o 

program: main.o comparators.o
	$(CC) main.o comparators.o -o program

clean:
	rm -f *.o program


