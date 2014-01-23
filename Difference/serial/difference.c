/* Recurrence, finite differences */

#include <stdio.h>
#include <math.h>

int main()
{
  const int N = 10000;	  // # of intervals
  const double h = 0.001; // size of interval
  double y[N];		  // value of function
  const int prune = 1;	  // print every...

  for(int i = 0; i < N; i++)
    y[i] = sin(i*h);
  
  for(int i = 0; i < N; i++)
    {
      if(i%prune == 0)
	printf("%g\t%g\n", i*h, y[i]);
    }
  
  for(int i = 0; i < N - 1; i++)
    {
      y[i] = (y[i+1]-y[i])/h;	// forward difference
    }

  y[N-1] = y[N-2];		// kind of kluge

  printf("\n\n");
   
  for(int i = 0; i < N; i++)
    {
      if(i%prune == 0)
	printf("%g\t%g\n", i*h, y[i]);
    }

  return 0;
}
