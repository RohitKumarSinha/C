// write a program to compute the sum and mean of the elements of a two-dimensional array

#include <stdio.h>

int main()
{
  int num[5][5], sum[5] = {0, 0, 0, 0, 0};
  float mean[5] = {0.0, 0.0, 0.0, 0.0, 0.0};

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      printf("num[%d][%d] = ", i, j);
      scanf("%d", &num[i][j]);
    }
  }

  printf("\n\nsum of the numbers in column wise : \n\n");

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      sum[i] += num[i][j];
    }
  }

  for (int i = 0; i < 5; i++)
    mean[i] = sum[i] / 2;

  for (int i = 0; i < 5; i++)
  {
    printf("sum[%d] = %d   mean[%d] = %.2f\n", i, sum[i], i, mean[i]);
  }

  return 0;
}
