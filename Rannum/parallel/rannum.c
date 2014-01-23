/* Random number generator */

#include <stdio.h>
#include <omp.h>

unsigned int seed;  /* random number seed */
const unsigned int rand_max = 32768;

double rannum()
{
#pragma omp threadprivate(seed)
  unsigned int rv;
  seed = seed * 1103515245 + 12345;
  rv = ((unsigned)(seed/65536) % rand_max);
  
  return (double)rv/rand_max;
}

int main()
{
  const int N = 10;  /*number of random numbers*/
  int i;

#pragma omp threadprivate(seed)

#pragma omp parallel
  {
    seed = omp_get_thread_num()+1;	// each thread sets up its own seed

#pragma omp for
    for(i = 0; i < N; i++)
      {
	printf("%d\t%g\n",
	       omp_get_thread_num(),
	       rannum());      
      }
  }

  return 0;
}
