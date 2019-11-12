#include <stdio.h>

int main()
{
  int i, j, first, swap, last, middle, n, arr[100], search;

  printf("enter how many number you want to input : \n");
  scanf("%d", &n);

  printf("enter the number :\n");
  for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);

   for (i = 0; i < n - 1; i++)
   {
     for (j = 0; j < n - i; j++)
     {
       if (arr[j] > arr[j + 1])
       {
         swap = arr[j];
         arr[j] = arr[j + 1];
         arr[j + 1] = swap;
       }
     }
   }

   printf("enter the number you want to search for :\n");
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
         printf("%d is found in the list", search);
         break;
      }

      else
         last = middle - 1;

      middle = (first + last) / 2;
   }

   if (first > last)
       printf("%d is not found in list ", search);

    return 0;
}
