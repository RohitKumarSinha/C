// a program of star pattern like this
// *
// **
// ***
// ****
// *****
#include <stdio.h>

int main()
{
  int i, j;

  for (i = 1; i <= 5; i++)
  {
    printf("\n");
    for (j = 1; j <= 5; j++)
    {
      if (j <= i) // if the inner loop is smaller and equal to outer loop then this block run
          printf("*");

      else
          printf(" ");
    }
  }
  printf("\n");
  return 0;
}
