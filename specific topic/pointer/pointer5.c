#include <stdio.h>
#include <windows.h>

int main()
{
  int a1[5], a2[5];
  int *n1, *n2, t, i;

  n1 = &a1[0];
  printf("enter the five integer number of the first array :- \n");
  for (i = 0; i < 5; i++)
      scanf("%d", n1 + i);

  n2 = &a2[0];
  printf("enter the five integer number of the second array :- \n");
  for (i = 0; i < 5; i++)
      scanf("%d", n2 + i);

  system("cls");

  printf("Before swapping the two array : \n");
  printf("array 1                     array 2\n\n");

  for (i = 0; i < 5; i++)
      printf(" %d                          %d\n", *(n1 + i), *(n2 + i));

  for (i = 0; i < 5; i++)
  {
      t =  *(n1 + i);
      *(n1 + i) = *(n2 + i);
      *(n2 + i) = t;

    }


  printf("\n\nafter swapping the two array :\n\n");
  printf("array 1                     array 2\n\n");
  for (i = 0; i < 5; i++)
  printf("%d                               %d\n", *(n1 + i), *(n2 + i));

  return 0;
}
