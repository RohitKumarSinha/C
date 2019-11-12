#include <stdio.h>

int main()
{
  int n[5][5], i, j, a;

  for(i = 0; i <= 4; i++)
  {
    printf("\nenter the number in %d row:- \n", i+1);
    for (j = 0; j <= 4; j++)
    {
      printf("enter the number in %d column:- ", j+1);
      scanf("%d", &n[i][j]);
    }
  }

  a = n[0][0];

for (i = 0; i <=4; i++)
{
  for (j = 0; j <=4; j++)
  {
    if(a < n[i][j])
    {
      a = n[i][j];
    }
  }
}

  printf("the largest number of your matrix is %d", a);
  return 0;
}
