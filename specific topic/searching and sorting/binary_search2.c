#include <stdio.h>

int main()
{
  int i, j, first, last, middle, search, n, arr[100];

  printf("how many numbers you want to enter :- \n");
  scanf("%d", &n);

  printf("enter your numbers in sorted order : \n");
  for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);

  printf("enter the number you want to search :\n");
        scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first + last) / 2;

  while (first <= last)
  {
    if (arr[middle] < search)
        first = middle + 1;

    else if (arr[middle] == search)
      {
        printf("%d is found art location %d", search, middle + 1);
        break;
      }

    else
    {
       last = middle - 1;
    }


    middle = (first + last) / 2;
  }

    if (first > last)
        printf("%d is not found in your list", search);

    return 0;
}
