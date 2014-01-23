/* Monte Carlo simulation of pi*/

#include <stdio.h>

unsigned int seed = 1;  /* random number seed */
const unsigned int rand_max = 32768;

double rannum()
{
  unsigned int rv;
  seed = seed * 1103515245 + 12345;
  rv = ((unsigned)(seed/65536) % rand_max);
  return (double)rv/rand_max;
}

int main()
{
  const int N = 1000000000;      /* number of random numbers   */
  const double r = 1.0;  /* radius of unit circle */

  int i;

  double x, y;   /* function inputs */
  double sum = 0.0;
  double Q = 0.0;

  for(i = 0; i < N; i++)
    {
      /* random number, can't use library function, not thread safe */
      x = rannum();
      y = rannum();
      
      if((x*x + y*y) < r)
	{
	  sum = sum+1.0;
	}
    }

  Q = 4.0*sum*1.0/N;
  
  printf("%.9g\n", Q);

  return 0;
}
