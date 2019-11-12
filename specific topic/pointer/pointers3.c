#include <stdio.h>

int main()
{
  int num[5], i;
  int *n;

  n = &num[0];
  printf("enter five integer number :- \n");
  for (i = 0; i < 5; i++)
      scanf("%d", n + i);

   printf("\n\nyour number is :\n\n");
   for (i = 0; i < 5; i++)
       printf("%d\t", *(n + i));

    return 0;
}
