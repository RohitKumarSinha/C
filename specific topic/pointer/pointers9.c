#include <stdio.h>

int main()
{
  int num[3][3], i, j;
  int *n;

  *n = num[0][0];
  printf("enter a matrix of 3x3 :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
     scanf("%d", ((n + i) + j));
  }

  return 0;
}
