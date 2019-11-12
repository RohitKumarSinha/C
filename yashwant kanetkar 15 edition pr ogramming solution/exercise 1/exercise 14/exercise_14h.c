#include <stdio.h>
int main()
{
  int n[3][3], m[3][3], i, j;

  printf("if nothing printed on the screen it means it is symmetric\n");
  printf("enter matrix :");

  for(i = 0; i <= 2; i++)
  {
    printf("\nenter the number in %d row:- \n", i+1);
    for (j = 0; j <= 2; j++)
    {
      printf("enter the number in %d column:- ", j+1);
      scanf("%d", &n[i][j]);
      m[i][j] = n[i][j];
    }
  }

  printf("now your transpose matrix is :\n");
  for(i = 0; i <= 2; i++)
  {
     printf("\n");
    for (j = 0; j <= 2; j++)
    {
      printf("%d\t", m[j][i]);
    }
  }

  for(i = 0; i <= 2; i++)
  {
    for (j = 0; j <= 2; j++)
    {
      if ((n[i][j]) != (m[j][i]))
         printf("\nnot a symmetric matrix");
         break;
    }
  }



  return 0;
}
