// write a program to delete all the duplicate entries from an array of n integers

#include <stdio.h>

int main()
{
  int arr[5], flag = 0;

  printf("enter the array of 5 integers :\n");

  for (int i = 0; i < 5; i++)
      scanf("%d", &arr[i]);

  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5;  j++)
    {
      if (arr[i] == arr[j] && i != j)
      {
        flag = 1;
        printf("\nDuplicates numbers found at locations %d and %d", i, j);

        for (int i = j; i < 4; i++)
             arr[i] = arr[i + 1];

      }
    }
  }

  if (flag == 0)
      printf("\n No duplicates found");

  printf("\n The array after deletion is : \n");
  for (int i = 0; i < 4; i++)
       printf("\n arr[%d] = %d", i, arr[i]);

  return 0;
}
