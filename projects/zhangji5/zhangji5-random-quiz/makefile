CC=gcc --std=c99 -g

all: test

testme.o: testme.c
	$(CC) -c testme.c

test: testme.c
	$(CC) testme.c -o testme

clean:
	rm -f test.o


