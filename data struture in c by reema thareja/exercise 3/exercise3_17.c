// write a program that reads a matrix and displays the sum of the elements below main diagonal

#include <stdio.h>

int main()
{
  int arr[3][3];

  printf("enter the matrix of 3 x 3 : \n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("arr[%d][%d] = ", i, j);
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < 3; i++)
  {
    printf("\n");
    for (int j = 0; j < 3; j++)
    {
      printf("arr[%d][%d] =  %d\t", i, j, arr[i][j]);
    }
  }

  int sum_diagonal = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i > j)
         sum_diagonal += arr[i][j];
    }
  }

  printf("\nsum of the diagonal is %d\n", sum_diagonal);

  return 0;
}
