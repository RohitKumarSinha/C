// write a program to add two 3 x 3 matrix using pointers

#include <stdio.h>

int main()
{
  int m1[3][3];
  int m2[3][3];

  printf("Enter the matrix of 3 x 3 : \n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("m1[%d][%d] = ", i, j);
      scanf("%d", (*(m1 + i) + j));
    }
  }

  printf("\n\nEnter another the matrix of 3 x 3 : \n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("m2[%d][%d] = ", i, j);
      scanf("%d", (*(m2 + i) + j));
    }
  }

  printf("\n\nAfter adding the two matrix of 3 x 3 : \n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("m1[%d][%d] + m2[%d][%d] = %d\n", i, j, i, j, *(*(m1 + i) + j) + *(*(m2 + i) + j));
    }
  }

  return 0;
}
