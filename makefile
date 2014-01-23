all:
	cd HelloWorld/serial/;make
	cd HelloWorld/parallel/;make
	cd Mapexp/serial/;make
	cd Mapexp/parallel/;make
	cd SAXPY/serial/;make
	cd SAXPY/parallel/;make
	cd Trapezoid/serial/;make
	cd Trapezoid/parallel/;make
	cd MonteCarlo/serial/;make
	cd MonteCarlo/parallel/;make
	cd Rannum/serial/;make
	cd Rannum/parallel/;make
	cd Difference/serial/;make
	cd Difference/parallel/;make
	cd Motivation/serial/;make
	cd Motivation/parallel/;make
	cd Init/serial/;make
	cd Init/parallel/;make
clean:
	rm -f *.o *.a *.*~ *~ core core.* "#"*
	cd HelloWorld/serial/;make clean
	cd HelloWorld/parallel/;make clean
	cd Mapexp/serial/;make clean
	cd Mapexp/parallel/;make clean
	cd SAXPY/serial/;make clean
	cd SAXPY/parallel/;make clean
	cd Trapezoid/serial/;make clean
	cd Trapezoid/parallel/;make clean
	cd MonteCarlo/serial/;make clean
	cd MonteCarlo/parallel/;make clean
	cd Rannum/serial/;make clean
	cd Rannum/parallel/;make clean
	cd Difference/serial/;make clean
	cd Difference/parallel/;make clean
	cd Motivation/serial/;make clean
	cd Motivation/parallel/;make clean
	cd Init/serial/;make clean
	cd Init/parallel/;make clean

