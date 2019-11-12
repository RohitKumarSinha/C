#include <stdio.h>

int main()
{
  int i, j;

  for (i = 1; i <= 5; i++)
  {
    printf("\n");
    for(j = 1; j <= 5; j++)
    {
      if (j >= i) // if inner loop is greater than outer loop then this block executes
         printf("*");

      else
        printf(" "); // otherwise this block executes
    }
  }
  return 0;
}
