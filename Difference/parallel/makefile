#CC = gcc-mp-4.7 -std=c99 -Wall -fopenmp
CC = gcc -std=c99 -Wall -fopenmp

all : difference

difference : difference.o
	${CC} difference.o -lm -o difference

clean:
	rm -f *.o *.a *.*~ *~ core core.* "#"* difference
