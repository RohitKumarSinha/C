// linear search of element in array

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[5], search;

  printf("Enter the five numbers in the array : \n");
  for (int i = 0; i < 5; i++)
      scanf("%d", &arr[i]);

  printf("\nEnter the number you want to search :- ");
  scanf("%d", &search);

  for (int j = 0; j < 5; j++)
  {
    if (arr[j] == search)
    {
      printf("\n%d is found at position %d", search, j);
      exit(0);
    }
  }

  printf("\nYour number is not found in the array");
  return 0;
}
