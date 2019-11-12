#include <stdio.h>

int main()
{
  int a1[5], a2[5], i;
  int *n, *n1;

  n = &a1[0];
  n1 = &a2[0];
  printf("enter the five integer number in first array : \n");
  for (i = 0; i < 5; i++)
  {
      scanf("%d", n + i);
      *(n1 + i) = *(n + i);

    }

    printf("\n\narray 1                                array 2\n\n");
    for (i = 0; i < 5; i++)
         printf("%d                                       %d\n",*(n + i), *(n1 + i));

    return 0;
}
