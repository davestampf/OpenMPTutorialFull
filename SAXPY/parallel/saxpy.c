/* Parallel Single Precision a*x plus y */

#include <stdio.h>
#include <omp.h>

int main()
{
  const int N = 1000;
  const double a = .5f;
  double sum = 0.0f;
  double z[N], x[N], y[N];
  int i;

#pragma omp parallel for
  for(i = 0; i < N; i++)
    {
      x[i] = (i+1)*.15;
      y[i] = (i+1)*.1;
    }

#pragma omp parallel for
  for(i = 0; i < N; i++)
    {
      z[i] = a*x[i] + y[i];
    }

#pragma omp parallel for reduction(+:sum)
  for(i = 0; i < N; i++)
    {
      sum += z[i];
    }

  printf("%f\n", sum);

  return 0;
}
