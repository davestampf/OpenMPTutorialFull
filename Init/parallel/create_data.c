#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

// create 2 files, million1.dat and million2.dat, each with
// 1,000,000 random numbers, 1 per line.

int main(int argc, char** argv) {
	FILE *f;

	srandom(time(NULL));
	f = fopen("million1.dat","w");
	for (int i = 0; i < 1000000; i++) {
		double val = (2.*random() - INT_MAX)/INT_MAX;
		fprintf(f,"%e\n",val);
	}
	fclose(f);

	f = fopen("million2.dat","w");
	for (int i = 0; i < 1000000; i++) {
		double val = (2.*random() - INT_MAX)/INT_MAX;
		fprintf(f,"%e\n",val);
	}
	fclose(f);
}



