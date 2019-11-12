// write a program using pointers to interchange the second biggest and the second smallest number in the array

#include <stdio.h>

int main()
{
  int arr[5];

  printf("Enter the five numbers in the array :\n ");

  for (int i = 0; i < 5; i++)
  {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  int first_largest = arr[0];

  for (int i = 0; i < 5; i++)
  {
    if (first_largest < arr[i])
        first_largest = arr[i];
  }

  int first_small = arr[0];

  for (int i = 0; i < 5; i++)
  {
    if (first_small > arr[i])
       first_small = arr[i];
  }

  int second_largest = arr[0], posi_l;

  for (int i = 0; i < 5; i++)
  {
    if (second_largest < arr[i] && first_largest > arr[i])
        second_largest = arr[i];
        posi_l = i;
  }

  int second_small = arr[0], posi_s;

  for (int i = 0; i < 5; i++)
  {
    if (second_small > arr[i] || first_small < arr[i])
    {
            second_small = arr[i];
            posi_s = i;
            break;
    }

    if (second_small > arr[i] && first_small < arr[i])
        second_small = arr[i];
 }

 printf("\n\nArray before interchange the second biggest with second smallest number in array : \n\n");

 for (int i = 0; i < 5; i++)
      printf("arr[%d] = %d \n", i, arr[i]);


      arr[posi_l - 1] = second_small;
      arr[posi_s] = second_largest;


 printf("\n\nArray after interchange the second biggest with second smallest number in array : \n\n");

 for (int  i = 0; i < 5; i++)
      printf("arr[%d] = %d \n", i, arr[i]);


  return 0;

}
