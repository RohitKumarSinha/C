// write a program to calculate XA + YB where A and B are matrices and X = 2 and Y = 3

#include <stdio.h>

int main()
{
  int m1[3][3], m2[3][3];

  printf("Enter the first matrix of 3 x 3 :\n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("m1[%d][%d] = ", i, j);
      scanf("%d", &m1[i][j]);
    }
  }

  printf("\n\nEnter the seecond matrix of 3 x 3 :\n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("m2[%d][%d] = ", i, j);
      scanf("%d", &m2[i][j]);
    }
  }

  printf("\n\nArrays before operation XA + YB here x = 2, A = first matrix, Y = 3, B = second matrix: \n\n");

  for (int i = 0; i < 3; i++)
  {
    printf("\n");
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", m1[i][j]);
    }
  }

  printf("\n\n");

  for (int i = 0; i < 3; i++)
  {
    printf("\n");
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", m2[i][j]);
    }
  }

  printf("\n\nArrays after operation XA + YB here x = 2, A = first matrix, Y = 3, B = second matrix: \n\n");


  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      m1[i][j] = 2 * m1[i][j];
      m2[i][j] = 3 * m2[i][j];
    }
  }


  for (int i = 0; i < 3; i++)
  {
    printf("\n");
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", m1[i][j] + m2[i][j]);
    }
  }

  return 0;
}
