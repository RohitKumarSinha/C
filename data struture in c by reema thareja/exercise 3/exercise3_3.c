// write a program to interchange the second element with the second last element

#include <stdio.h>

int main()
{
  int num[5];

  for (int i = 0; i < 5; i++)
  {
    printf("num[%d] = ", i);
    scanf("%d", &num[i]);
  }

  int temp;

  temp = num[1];
  num[1] = num[2];
  num[2] = temp;

   printf("\n\nafter interchange the second element with second last element  the numbers are : \n\n");


    for (int i = 0; i < 5; i++)
       printf("num[%d] = %d\n", i, num[i]);

    return 0;
}
