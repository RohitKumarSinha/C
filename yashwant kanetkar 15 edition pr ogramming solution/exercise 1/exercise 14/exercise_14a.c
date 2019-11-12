#include <stdio.h>

int main()
{
  int j,k,i, n[3][2][3];

  for (j = 0; j <= 2; j++)
  { printf("\nenter the maks of %d insitute", j+1);
    for (k = 0; k <= 1; k++)
    { printf("\nenter the marks of %d student\n", k+1);
      for (i = 0; i <= 2; i++)
      { printf("enter the marks of %d subject :- " , i+1);
        scanf("%d", &n[j][k][i]);
      }
    }
  }

  return 0;
}
