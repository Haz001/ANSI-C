CC=gcc
CFLAGS=-ansi -pedantic

main: farh cels

farh: f2c.c
	$(CC) -o f.out $< $(CFLAGS)
cels: c2f.c
	$(CC) -o c.out $< $(CFLAGS)
