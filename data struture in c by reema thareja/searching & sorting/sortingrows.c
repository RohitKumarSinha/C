// sorting row by row in a matrix

#include <stdio.h>

int main()
{
  int mat[3][3];
  int *ptr;

  ptr  = &mat[0][0];

  printf("enter the matrix of 3 x 3 : \n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }

  printf("your matrix is : \n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (mat[i][j] > mat[i + 1][j + 1])
      {
        int *ptr = &mat[i][j], *ano_ptr = &mat[i + 1][j + 1];
        int *temp;

        temp = ptr;
        ptr = ano_ptr;
        ano_ptr = temp;
      }
    }
  }

  printf("\n\nyour matrix is : \n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
