#include <stdio.h>

int main()
{
  int num[5], i, s;
  int *n;

  n = &num[0];
  printf("enter 5 integer number in an array : \n");
  for (i = 0; i < 5; i++)
      scanf("%d", n + i);

  printf("which number you want to search :- ");
  scanf("%d", &s);

  for (i = 0; i < 5; i++)
       if (s == *(n + i))
         printf("\n\nthis number is %d position in the array .", i + 1);

    return 0;
}
