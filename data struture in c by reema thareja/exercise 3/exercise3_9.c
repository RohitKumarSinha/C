/* write a program that computes the product of the elements that are stored on the diagonal above the main
  diagonal */

#include <stdio.h>

int main()
{
  int m[3][3], product;

  printf("Enter the matrix of 3 x 3 : \n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("m[%d][%d] = ", i, j);
      scanf("%d", (*(m + i) + j));
    }
  }

  product = *(*(m + 0) + 1) * *(*(m + 0) + 2) * *(*(m + 1) + 2);

  printf("\n\nThe product of the elements that are stored on the diagonal above the main diagonal is %d", product);

  return 0;

}
