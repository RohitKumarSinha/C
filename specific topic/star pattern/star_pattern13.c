#include <stdio.h>

int main()
{
  int i, j, k;

  for (i = 0; i <= 7; i++)
  {
    for (j = 0; j <= 7; j++)
    {
      if (j <= 5 - i)
      {
         printf("%d",j);
         k--;
      }

      else
         printf(" ");
    }
    printf("\n");
  }
  return 0;
}
