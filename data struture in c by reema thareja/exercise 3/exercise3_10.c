// write a program to count the total numbers of non-zero elements in a two-dimensional array

#include <stdio.h>

int main()
{
  int m[3][3], count_non_zero = 0;

  printf("Enter the matrix of 3 x 3 : \n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("m[%d][%d] = ", i, j);
      scanf("%d", &m[i][j]);
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (m[i][j] != 0)
         count_non_zero += 1;
    }
  }

  printf("\n\ntotal number of non-zero elements in 3 x 3 matrix is %d", count_non_zero);

  return 0;
}
