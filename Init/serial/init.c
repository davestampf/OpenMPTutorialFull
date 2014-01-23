#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char** argv) {

	// read in million1 and determine the mean and variance of
	// the data within.

	FILE *f = fopen("million1.dat","r");
	double sum = 0, sumSquared = 0;
	for (int i = 0; i < 1000000; i++) {
		double x;
		fscanf(f,"%le",&x);
		sum += x;
		sumSquared += x*x;
	}
	fclose(f);
	double mean = sum/1000000;
	double var = (sumSquared/1000000) - mean*mean;
	printf("mean = %e variance = %e\n",mean, var);

	// read in million2 and determine the max and min
	// of the data within.

	f = fopen("million2.dat","r");
	double max = -1.0, min = 1.0;
	for (int i = 0; i < 1000000; i++) {
		double x;
		fscanf(f,"%le",&x);
		if (x < min) min = x;
		else if (x > max) max = x;
	}
	printf("max = %e min = %e\n",max,min);
}
