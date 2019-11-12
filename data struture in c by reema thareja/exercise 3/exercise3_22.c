// write a program to illustrate the use of a pointer that points to a 2D array

#include <stdio.h>

int main()
{
  int arr[3][3];
  int *ptr;

  ptr = &arr[0][0];

  printf("enter the array of 3 x 3 : \n\n");

  for (int i = 0; i < 9; i++)
  {
      scanf("%d", (ptr + i));
  }

  printf("\nHere the array of 3 x 3 : \n\n");
  
  for (int i = 0; i < 9; i++)
      printf("%d\n", *(ptr + i));

 return 0;
}
