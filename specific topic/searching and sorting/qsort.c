// c program to sort the array in descending order

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
  return (*(int *)a < *(int *)b);
}

int main()
{
  int data[] = {23, 56, 31, 57, 21};

  qsort(data, 5, sizeof(int), compare);

  for (int i = 0; i < 5; i++)
      printf("%d\t", data[i]);

    return 0;
}
