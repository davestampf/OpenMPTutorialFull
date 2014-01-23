//
// This is a boring parallel program
//

#include <stdio.h>
#include <limits.h>
#include <omp.h>

int main(int argc, char** argv) {

#pragma omp parallel
	{
		for (int i = INT_MIN; i < INT_MAX; i++) ;
		printf("Done with pass %d\n",omp_get_thread_num());
	}
}

