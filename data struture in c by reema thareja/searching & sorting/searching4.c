// jumping search in the array

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void jump_search(int arr[], int, int, int, int);

int main()
{
  int arr[5], search, n,low = 0, high = 4;

  printf("Enter the five numbers in the array : \n");
  for (int row = 0; row < 5; row++)
  scanf("%d", &arr[row]);

  printf("\nEnter the value to be searched in array");
  scanf("%d", &search);

  n = sqrt(4);

  jump_search(arr, low, high, search, n);

  return 0;
}

void jump_search(int arr[], int low, int high, int search, int n)
{
  int i;

  for (i = 0; i < n; i++)
  {
    if (search < arr[n])
        high = n - 1;

    else
        low = n + 1;

  }

  i = low;
  while (i <= high)
  {
    if (arr[i] == search)
    {
      printf("\n%d is at position %d", i, search);
      exit(0);
    }

    i += 1;
  }

  printf("\nvalue is not present in the array");
}
