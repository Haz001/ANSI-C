CC=gcc
CFLAGS=-ansi -pedantic

default: main.out split.out

main.out: main.c
	$(CC) -o main.out $< $(CFLAGS)

split.out: split.c
	$(CC) -o split.out $< $(CFLAGS)

clean:
	rm ./*.out
