all: main.o functions.o
	$(CC) -o main main.o functions.o -lm

run:
	./main

clean:
	rm -f main test *.o

test: test.o functions.o
	$(CC) -o test test.o functions.o -lm
	./test
	rm -f test