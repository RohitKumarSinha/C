#include <stdio.h>

int main()
{
  int arr[5];

  printf("Enter the five number in an array : \n");
  for (int i = 0; i < 5; i++)
  scanf("%d", &arr[i]);

  for (int i = 0; i < 5; i++)
  {
    int temp = arr[i];
    int j = i - 1;
    while ((temp < arr[i]) && (j >= 0))
    {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = temp;
  }

  printf("the sorted array is : \n");
  for (int i = 0; i < 5; i++)
  printf("%d\t", arr[i]);

  return 0;
}
