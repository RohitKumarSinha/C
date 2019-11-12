/* write a program that computes the sum of the elements that are stored on the main diagonal of a matrix
  using pointer */

#include <stdio.h>

int main()
{
  int m1[3][3], sum;

  printf("Enter the matrix of 3 x 3 : \n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("m1[%d][%d] = ", i, j);
      scanf("%d", (*(m1 + i) + j));
    }
  }

  sum = *(*(m1 + 0) + 0) + *(*(m1 + 1) + 1) + *(*(m1 + 2) + 2);

  printf("\n\nsum of the elements that are stored on the main diagonal of a matrix is %d ", sum);

  return 0;
}
