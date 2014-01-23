#CC = gcc-mp-4.7 -Wall -std=c99
CC = gcc -Wall -std=c99

all : difference

difference : difference.o
	${CC} difference.o -lm -o difference

clean:
	rm -f *.o *.a *.*~ *~ core core.* "#"* difference
