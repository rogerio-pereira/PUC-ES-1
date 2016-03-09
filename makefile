all: ola.c
	gcc -g -Wall -o ola ola.c

clean:
	rm ola ola.o
