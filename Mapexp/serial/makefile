#CC = gcc-mp-4.7 -std=c99
CC = gcc -std=c99

all : mapexp

mapexp : mapexp.o
	${CC} mapexp.o -lm -o mapexp

clean:
	rm -f *.o *.a *.*~ *~ core core.* "#"* mapexp
