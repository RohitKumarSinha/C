// print N natural numbers
#include <stdio.h>

int main()
{
  int n, i;

  // input the Nth term
  printf("from which term you find natural number :- ");
  scanf("%d", &n);

  // print the natural numbers using for loop
  for (i = 1; i <= n ; i++)
  printf("your natural number : %d\n", i);

  return 0;
}
