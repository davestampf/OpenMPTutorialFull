#CC = gcc-mp-4.7 -fopenmp -Wall -std=c99
CC = gcc -fopenmp -Wall -std=c99

all : trapezoid trapezoidReduction

trapezoid : trapezoid.o
	${CC} trapezoid.o -lm -o trapezoid

trapezoidReduction : trapezoidReduction.o
	${CC} trapezoidReduction.o -lm -o trapezoidReduction

clean:
	rm -f *.o *.a *.*~ *~ core core.* "#"* trapezoid trapezoidReduction
