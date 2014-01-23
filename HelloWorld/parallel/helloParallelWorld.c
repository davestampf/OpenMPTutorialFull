#include <stdio.h>
#include <omp.h>

int main()
{

#pragma omp parallel 
  {
    int threadID = omp_get_thread_num();
    printf("%s %d\n", "hello parallel world from thread #", threadID);
  }

  return 0;
}
