#include <stdio.h>

int main()
{
  int n[3][3], m[3][3], i, j;


  printf("enter first matrix :");

  for(i = 0; i <= 2; i++)
  {
    printf("\nenter the number in %d row:- \n", i+1);
    for (j = 0; j <= 2; j++)
    {
      printf("enter the number in %d column:- ", j+1);
      scanf("%d", &n[i][j]);
    }
  }

  printf("enter second matrix :\n");
  for(i = 0; i <= 2; i++)
  {
    printf("\nenter the number in %d row:- \n", i+1);
    for (j = 0; j <= 2; j++)
    {
      printf("enter the number in %d column:- ", j+1);
      scanf("%d", &m[i][j]);
    }
  }

  printf("multiply of two matrix now our matrix is:\n");

  for(i = 0; i <= 2; i++)
  {
    printf("\n");
    for (j = 0; j <= 2; j++)
    {
      printf("%d\t", n[i][j] * m[i][j]);
    }
  }

  return 0;
}
