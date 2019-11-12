// selection sorting
#include <stdio.h>

int main()
{
  int arr[5], small, temp;

  printf("Enter the five numbers in the array : \n");
  for (int i = 0; i < 5; i++)
  scanf("%d", &arr[i]);

  small = arr[0];

  for (int j = 0; j < 5; j++)
  {
    for (int i = 0; i > j && i < 5; i++)
    {
      if (small > arr[i])
      {
        small = arr[i];
        arr[j] = arr[i];
      }
    }
  }

  for (int i = 0; i < 5; i++)
      printf("%d\t", arr[i]);

    return 0;
}
