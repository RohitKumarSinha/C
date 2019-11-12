/* write a program that reads a square matrix of size n x n. write a function int issymmetric (int a[][], int n)
   that returns 1 if the matrix is symmetric */

#include <stdio.h>

int isSymmetric(int a[3][3], int n);

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

  result = isSymmetric(m, 3);

  if (result == 0)
      printf("matrix is not symmetric ");

  else
    printf("matrix is symmetric");

   return 0;
}

int isSymmetric(int a[3][3], int n)
{

  for (int i = 0; i < n; i++)
 {
   for (int j = 0; j < n; j++)
    {
      if (a[i][j] != a[j][i])
         return 0;
     }
  }

    return 1;
  }
