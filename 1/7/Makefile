CC=gcc
CFLAGS=-ansi -pedantic

main.out: main.c
	$(CC) -o main.out $< $(CFLAGS)
si.out: si.c
	$(CC) -o si.out $<

run: main.out si.out
	./main.out
	./si.out
