/* map an array of reals to exp(x^2) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>

int main()
{
  const int N = 1000000;
  double sum = 0.0f;
  double *x, *z;	// range and domain
  x = (double*) malloc(N*sizeof(double));
  z = (double*) malloc(N*sizeof(double));

  int i;

	printf("open mp version: %d\n",_OPENMP);

  /* populate x */

#pragma omp parallel for 
  for(i = 0; i < N; i++) 
    x[i] = (i+1)*.000001;

  /* map code here */

#pragma omp parallel for
  for(i = 0; i < N; i++) {
    z[i] = exp(x[i]*x[i]);
  }

  /* compute the sum */

#pragma omp parallel
{
  double private_sum = 0.0;
  #pragma omp for 
   for(i = 0; i < N; i++) {
     private_sum += z[i];
   }

  #pragma omp critical
  {
    sum += private_sum;
  }
}

  printf("%f\n", sum);
  return 0;
}
