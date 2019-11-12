#include <stdio.h>

int main()
{
  int n[4][4], i, j;

  for(i = 0; i <= 3; i++)
  {
    printf("\nenter the number in %d row:- \n", i+1);
    for (j = 0; j <= 3; j++)
    {
      printf("enter the number in %d column:- ", j+1);
      scanf("%d", &n[i][j]);
    }
  }

  printf("now your matrix is :\n");

  for (i = 0; i <= 3; i++)
  {
    printf("\n");
    for (j = 0; j <= 3; j++)
    {
      printf("%d\t", n[i][j]);
    }
  }

  printf("\nnow your transpose matrix is :\n");
  for (i = 0; i <= 3; i++)
  {
    printf("\n");
    for (j = 0; j <= 3; j++)
    {
      printf("%d\t", n[j][i]);
    }
  }


  return 0;
}
