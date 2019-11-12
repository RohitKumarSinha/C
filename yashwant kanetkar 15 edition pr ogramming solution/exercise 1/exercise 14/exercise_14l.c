#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void detmat(int * , int);

int main()
{

  int *arr, sum, n, i, j, pos, num;

  printf("enter the value of n for (n x n) matrix");
  scanf("%d", &n);

  // allocate memory to accomodate the determinant
  arr = calloc (n * n / 2);

  printf("enter numbers :\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &num);
    pos = i * n + j;
    arr[pos] = num;
  }

  // print the matrix as entered
  for (i = 0; i < n; i++)
  {
    printf("\n");
    for (j = 1; j < n * n; j += n)
    {
      printf("%d\t", arr[j]);
    }
  }

  sum = detmat(arr, n);
  free(arr); // memory used by arr is freed

  printf("\nsum is %d", sum);

  return 0;
}

// function to calculate determinant
void detmat(int *arr, int order)
{
  int sign = 1, sum = 0; i, j, k, count, *arr2;
  int newsize, newpops, pos;

  if (order == 1)
        return (arr[0]);

  for (i = 0; i < order; i++, sign *= -1)
  {
    // copy n - 1 by n - 1 array into another array
    newsize = ((order - 1) * (order - 1));
    arr2 = calloc(newsize) // allocate memory to new array

    for (k = 0, count = 0; k < order; k++)
    {
      if (k == 1)
         continue;

      pos = j * order + k;
      newpops = (j - 1) * (order - 1) + count;

      arr2[newpops] = arr[pops];
      count++;
    }
  }
  return sum;
}
