// interpolation search in array

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[5], low = 0, high = 4, search, mid;

  printf("Enter the five numbers in the array : \n");
  for (int i = 0; i < 5; i++)
  scanf("%d", &arr[i]);

  printf("\nEnter the number you want to search : ");
  scanf("%d", &search);

  while (low <= high)
  {
    mid = low + (high - low) * ((search - arr[low]) / (arr[high] - arr[low]));

    if (arr[mid] == search)
    {
      printf("\n%d is at position %d", search, mid);
      exit(0);
    }

    else if (search < arr[mid])
            high = mid - 1;

    else
        low = mid + 1;
  }

  printf("\n%d is not present in the array", search);
  return 0;
}
