#CC = gcc-mp-4.7 -fopenmp -std=c99 -Wall
CC = gcc -fopenmp -std=c99 -Wall

all : mapexp mapexpReduce mapexpCritical

mapexp : mapexp.o
	${CC} mapexp.o -lm -o mapexp

mapexpReduce : mapexpReduce.o
	${CC} mapexpReduce.o -lm -o mapexpReduce

mapexpCritical : mapexpCritical.o
	${CC} mapexpCritical.o -lm -o mapexpCritical

clean:
	rm -f *.o *.a *.*~ *~ core core.* "#"* mapexp mapexpReduce mapexpCritical
