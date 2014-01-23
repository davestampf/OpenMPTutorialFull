#CC = gcc-mp-4.7 -std=c99  -Wall
CC = gcc -std=c99  -Wall

all: create_data init

create_data : create_data.o
	${CC} create_data.o -lm -o create_data

clean:
	rm -f *.o *.a *.*~ *~ core core.* "#"* create_data init
