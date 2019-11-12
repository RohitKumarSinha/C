// program to sort the array in ascending order

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
  return (*(int *)a > *(int *)b);
}

int main()
{
  int data[] = {34, 56, 21, 45, 66};

  qsort(data, 5, sizeof(int), compare);

  for (int i = 0; i < 5; i++)
      printf("%d\t", data[i]);

   return 0;
}
