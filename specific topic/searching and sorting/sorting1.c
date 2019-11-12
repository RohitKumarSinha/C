#include <stdio.h>

int main()
{
  int arr[100], n, i, j, swap;

  printf("enter how many numbers you want to enter :- ");
  scanf("%d", &n);

  printf("enter the numbers :\n");
  for (i = 0; i < n; i++)
  scanf("%d", &arr[i]);

  for (i = 0; i < (n - 1); i++)
  {
    for (j = 0; j < (n - i); j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = swap;
      }
    }
  }

  printf("your sorted array is :\n");
  for (i = 0; i < n; i++)
       printf("%d\t", arr[i]);

  return 0;
}
