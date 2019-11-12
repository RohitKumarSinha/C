// program to find out N odd number
#include <stdio.h>

int main()
{
  int n, i, j;

  // input the nth term
  printf("from where up to you find out odd number :- ");
  scanf("%d", &n);

  for (i = 1, j = 1; j <= n; i += 2, j++)
      printf("your %d odd number is %d\n", j, i);
}
