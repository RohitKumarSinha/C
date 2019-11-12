// print N  even natural numbers
#include <stdio.h>

int main()
{
  int n, i, j;

  // input the term
  printf("from which term you want to see even number :- ");
  scanf("%d", &n);

  // calculate and print the even numbers
  for (i = 2, j = 1; j <= n; i += 2, j++)
  printf("your %d natural even number is : %d\n", j, i);
}
