// write a program that reads a matrix and displays the sum of its diagonal elements

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

  sum_diagonal = arr[0][1] + arr[0][2] + arr[1][1] + arr[2][0] + arr[2][2];

  printf("\nsum of the diagonal is %d", sum_diagonal);

  return 0;
}
