// sorting the numbers in array

#include <stdio.h>

int main()
{
  int arr[5], i, j, swap;

  printf("enter the 5 number : \n");
  for (i = 0; i < 5; i++)
      scanf("%d", &arr[i]);

   for (i = 0; i < 4; i++) // sorting only up to (n - 1) element because if we sort number up to (n - 1) element
   // then n will automatically sorted
   {
     for (j = 0; j < 4 - i; j++) // decreasing the element (4 - 1) because every time we put the heavest element
     // in the bottom of the array
     {
       if (arr[j] > arr[j + 1]) // swapping the numbers if that number is greater than next element of the array
       {
         swap = arr[j];
         arr[j] = arr[j + 1];
         arr[j + 1] = swap;
       }
     }
   }

   printf("soretd list \n");
   for (i = 0; i < 5; i++)
       printf("%d\t", arr[i]);

    return 0;
}
