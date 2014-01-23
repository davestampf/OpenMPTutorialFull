/* map an array of reals to exp(x^2) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>

int main()
{
  const int N = 1000000;
  float sum = 0.0f;
  float *x, *z;	// range and domain
  x = (float*) malloc(N*sizeof(float));
  z = (float*) malloc(N*sizeof(float));

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

  for(i = 0; i < N; i++) {
    sum += z[i];
  }

  printf("%f\n", sum);

  return 0;
}
