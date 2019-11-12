/* write a program taht reads a square matrix of size  n x n. write a function int isUpperTriangular
   (int a[][], int n) that returns 1 if the matrix is upper triangular */

#include <stdio.h>

int isUpperTriangular(int a[3][3], int n);

int main()
{
  int m[3][3], result;

  printf("Enter the matrix of 3 x 3: \n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("m[%d][%d] = ", i, j);
      scanf("%d", &m[i][j]);
    }
  }

  result = isUpperTriangular(m, 3);

  if (result == 0)
      printf("matrix is not upper triangle ");

  else
     printf("matrix is upper triangle");

  return 0;
}

int isUpperTriangular(int a[3][3], int n)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i > j)
         if (a[i][j] != 0)
             return 0;
    }
  }

  return 1;
}
