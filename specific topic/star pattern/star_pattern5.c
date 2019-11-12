#include <stdio.h>

int main()
{
  int i, j, k;

  for (i = 1; i <=5; i++)
  {
    printf("\n");
    for (j = 1; j <= 9; j++)
    {
      for (k = 0; k <= 1; k++)
      {
        if (j >= 6 - i && j <= 4 + i && k == 0)
           printf("*");

        else
           printf(" ");
      }
    }
  }

  return 0;
}
