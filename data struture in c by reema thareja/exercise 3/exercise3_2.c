// write a program that reads an array of 100 integers. display all the pairs of elements whose sum is 50

#include <stdio.h>

int main()
{
  int num[100];

  for (int i = 0; i < 100; i++)
  {
    printf("num[%d] = ", i);
    scanf("%d", &num[i]);
  }

  printf("\n\nall pair elements whose sum is 50 are : \n\n\n");

  for (int i = 0; i < 100; i++)
  {
    if (num[i] + num[i + 1] == 50)
        printf("num[%d] + num[%d] = 50\n", i, i + 1);

    else if (num[i] + num[i - 1] == 50)
         printf("num[%d] + num[%d] = 50\n", i, i - 1);
  }

  return 0;
}
