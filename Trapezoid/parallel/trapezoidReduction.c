/* Parallel Trapezoid Rule Program               */
/* [f(x0)/2 + f(xn)/2 + f(x1) + ... + f(xn-1)]*h */

#include <stdio.h>
#include <math.h>
#include <omp.h>   /*openmp api*/

double f(double x)
{
  return exp(x*x);
}

int main()
{
  double integral;     /*definite integral result*/
  const double a=0.0;  /*left end point*/
  const double b=1.0;  /*right end point*/
  const int N=100000; /*number of subdivisions*/
  double h;            /*base width of subdivision*/

  h = (b-a)/N;
  integral = 0.0;

#pragma omp parallel reduction(+:integral)
{

 double integral_priv = 0.0;
 
 #pragma omp for 
     for(int i = 1; i <= N-1; i++) {
 	double x = a+i*h;
 	integral_priv = integral_priv + f(x);
     }
 
     integral = integral+integral_priv;
 
}

  integral = (integral+(f(a)+f(b))/2.0)*h;

  printf("%s%d%s%f\n", "WITH N=", N, " TRAPEZOIDS, INTEGRAL=", integral);

  return 0;
}
