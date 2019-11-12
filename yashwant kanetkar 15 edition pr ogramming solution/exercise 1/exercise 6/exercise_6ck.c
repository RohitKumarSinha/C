#include <stdio.h>

int main()
{
  int popu = 100000, year = 1, result;

   for (year; year <= 10; year += 1)
   {
     result = (popu /100) * 10;
     popu = popu - result;
     printf("at the end of last %d year population was %d\n", year, popu);
   }


  return 0;
}
