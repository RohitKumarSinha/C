#include <stdio.h>

int main()
{
  int a[5], t, i, j;
  int *n;

  n = &a[0];
  printf("enter after numbers : \n");
  for (i = 0; i < 5; i++)
      scanf("%d", n + i);

  printf("before sorting number your number is : \n\n");
  for (i = 0; i < 5; i++)
      printf("%d\t", *(n + i));

  for (i = 1; i < 5; i++)
  {
    for (j = 0; j < 4 - i; j++)
         if (*(n + i) > *(n + i + 1))
     {
         t = *(n + i);
         *(n + i) = *(n + i + 1);
         *(n + i + 1) = t;
    }
  }

  printf("\n\nafter sorting number your number is : \n\n");
  for (i = 0; i < 5; i++)
      printf("%d\t", *(n + i));

  return 0;
}
