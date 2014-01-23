/* map an array of reals to exp(x^2) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  const int N = 1000000;
  double sum = 0.0f;
  double *x, *z;	// range and domain
  x = (double*) malloc(N*sizeof(double));
  z = (double*) malloc(N*sizeof(double));

  int i;

  /* populate x */
  for(i = 0; i < N; i++)
    x[i] = (i+1)*.000001;

  /* map code here */

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
