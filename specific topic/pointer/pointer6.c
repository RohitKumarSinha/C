#include <stdio.h>

int main()
{
  int num[5], i, j;
  int *n, t;

  n = &num[0];
  printf("enter 5 integer number of array :- \n");
  for (i = 0; i < 5; i++)
      scanf("%d", n + i);

   printf("before reverse array is :\n\n");
   for (i = 0; i < 5; i++)
       printf("%d \t", *(n + i));

    for (i = 0, j = 4; i <= 2; i++, j--)
    {
      t = *(n + i); // t = n[0]
      *(n + i) = *(n + j); // n[0] = n[4]
      *(n + j) = t; // n[4] = n[0]
    }

    printf("\nafter reverse array is : \n\n");
    for (i = 0; i < 5; i++)
    {
      printf("%d \t", *(n + i));
    }

    return 0;
}
