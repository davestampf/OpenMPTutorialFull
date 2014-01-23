#CC = gcc-mp-4.7 -std=c99 -Wall
CC = gcc -std=c99 -Wall

all : trapezoid

trapezoid : trapezoid.o
	${CC} trapezoid.o -lm -o trapezoid

clean:
	rm -f *.o *.a *.*~ *~ core core.* "#"* trapezoid
