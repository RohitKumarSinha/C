#include <stdio.h>

int main()
{
  int i, j, swap, first, last, middle, n, arr[100], search;

  printf("enter how many number you want to enter :- \n");
  scanf("%d", &n);

  printf("\nenter the number :\n");
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

  // suppose we search num 15
  printf("enter the value you want to search for : \n");
  scanf("%d", &search); // then search = 15

  // suppose we take a array of 7 int num
  first = 0; // then first = 0
  last = n - 1; // then last = 7 - 1 = 6
  middle = (first + last) / 2; // and middle = (0 + 6) / 2 = 3

  while (first <= last) // (0 <= 6)
  {
    if (arr[middle] < search) // (arr[3] < 15)
        first = middle + 1;  // first = 3 + 1

    else if (arr[middle] == search) // (arr[3] == 15)
    {
      printf("%d found in the list\n", search); // here search = 15, middle = 3 + 1 = 4
      break;
    }

    else
    {
      last = middle - 1; // last = 3 - 1 = 2
    }

    middle = (first + last) / 2;
  }

  if (first > last)
      printf(" NOT FOUND %d isn't present in the list \n", search);

    return 0;
}
