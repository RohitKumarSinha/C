#include <stdio.h>
#define n 6        //  in program where n is available we replaces it with 6

int main()
{

  int arr[n] = {1, 2, 3, 4, 2, 1},i, j; // assign the all value of array in curly braces

  for (i = 0, j = n - 1; i < n / 2; i++, j--) // initalize two value checking one condition and increment i or decrement j
  // increasing the value of i from index 0 and decreasing the value of j from n term
  {
    if (arr[i] == arr[j]) // checking the condition of array that first and last term are equal or not
        printf("arr[%d] and arr[%d] are equal .\n", i, j);

    else
        printf("arr[%d] and arr[%d] are not equal \n.", i, j);
  }
  return 0;
}
