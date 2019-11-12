// write a program to implement merge sort

#include <stdio.h>

void merge(int a[], int, int, int);
void merge_sort(int a[], int, int);

int main()
{
  int arr[10], i, n;
  printf("Enter the ten numbers in the array : \n");
  for (int i = 0; i < 10; i++)
  scanf("%d", &arr[i]);

  merge_sort(arr, 0, 9);
  printf("\nThe sorted array is : \n");
  for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);

  return 0;
}

void merge(int arr[], int beg, int mid, int end)
{
  int i = beg, j = mid + 1, index = beg, temp[10], k;

  while ((i <= mid) && (j <= end))
  {
    if (arr[i] < arr[j])
    {
      temp[index] = arr[i];
      i++;
    }
  }
}
