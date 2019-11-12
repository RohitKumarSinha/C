#include <stdio.h>

int main()
{
  int a[5], b[5], i, d = 0;

  printf("enter five number :- ");
  for (i = 0; i <= 4; i++)
  scanf("%d", &a[i]);


  for (i = 4; i >= 0; i--)
  {
   b[d] = a[i];
  d  += 1;
  }

  for (i = 0; i <= 4; i++)
  printf("%d", b[i]);

  return 0;
}
