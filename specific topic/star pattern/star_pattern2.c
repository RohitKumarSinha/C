#include <stdio.h>

int main()
{
  int i, j;

  for (i = 1; i <= 5; i++)
  {
    printf("\n");
    for (j = 5; j >= 1; j--)
    {
      if (j <= i) // if inner loop is smaller or equal to outer loop then execute this if block
        printf("*");

      else
         printf(" "); // otherwise else block
    }
  }
    return 0;
  }
