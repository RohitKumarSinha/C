// binary search in the array

#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[5], search, beg = 0, end = 4, mid = -1;

printf("Enter the five number in the array : \n");

  for (int i = 0; i < 5; i++)
      scanf("%d", &arr[i]);

  printf("\nEnter the number you want to search :- ");
  scanf("%d", &search);

  while (beg <= end)
  {
    mid = (beg + end) / 2;

    if (arr[mid] == search)
    {
      printf("\n%d is found at %d", search, mid);
      exit(0);
    }

    if (arr[mid] > search)
    {
      end -= 1;
    }

    else
    {
      beg += 1;
    }
  }

  printf("\nyour number is not found in array");
  return 0;
}
