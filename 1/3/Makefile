CC=gcc
CFLAGS=-ansi -pedantic

default: f2c.out c2f.out

f2c.out: f2c.c
	$(CC) -o f2c.out $< $(CFLAGS)
c2f.out: c2f.c
	$(CC) -o c2f.out $< $(CFLAGS)

clean:
	rm ./*.out
