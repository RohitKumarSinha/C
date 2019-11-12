/* write a program to read a floating point array. update the array to insert a new number at the specified
   location */

#include <stdio.h>

int main()
{
  float arr[5], num;
  int pos;

  printf("Enter the array of 5 real numbers :\n");

  for (int i = 0; i < 5; i++)
      scanf("%f", &arr[i]);

  printf("\nEnter the number to be inserted : - ");
  scanf("%f", &num);

  printf("\nEnter the position at which the number has to be added :- ");
  scanf("%d", &pos);

  for (int i = 4; i >= pos; i--)
      arr[i + 1] = arr[i];

  arr[pos] = num;

  arr[6];

  printf("\nThe array after insertion of %d is : ", num);

  for (int i = 0; i < 6; i++)
      printf("\narr[%d] = %.2f", i, arr[i]);

   return 0;
}
