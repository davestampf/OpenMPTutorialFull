/* Random Number generator */

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
  const int N = 10;      /* number of random numbers   */
  int i;

  for(i = 0; i < N; i++)
    {
      printf("%g\n",rannum());
    }

  return 0;
}
