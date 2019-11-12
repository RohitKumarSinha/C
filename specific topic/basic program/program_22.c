// program to calculate sum of n natural number

#include <stdio.h>

int main()
{
  int i, n, sum = 0;

  // input the value
  printf("from which term you add the natural number :- ");
  scanf("%d", &n);

  // calculate the sum of n natural number
  for (i = 1; i <= n; i++)
      sum = sum + i;

printf("sum of %d natural number is %d", n, sum);

return 0;
}
