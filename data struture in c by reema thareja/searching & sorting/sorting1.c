// bubble sorting technique

#include <stdio.h>

int main()
{
  int arr[5], temp;

  printf("Enter five numbers in array : \n");
  for (int i = 0; i < 5; i++)
  scanf("%d", &arr[i]);

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  printf("\nNow, your number is : \n");
  for (int i = 0; i < 5; i++)
      printf("%d\t", arr[i]);


  return 0;
}
