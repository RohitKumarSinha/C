// write a program that calculates the sum of squares of the elements

#include <stdio.h>
#include <math.h>


int main()
{
  int num[5];

  for (int i = 0; i < 5; i++)
  {
    printf("num[%d] = ", i);
    scanf("%d", &num[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    num[i] = pow(num[i] + num[i], 2);
  }

  printf("\n\nafter the sum of squares of the elements now the numbers are : \n\n");

  for (int i = 0; i < 5; i++)
       printf("num[%d] = %d \n", i, num[i]);
}
