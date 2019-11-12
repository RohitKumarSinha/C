// program to find out first n multiple natural number
#include <stdio.h>

int main()
{
  int n, i, mul = 1;

  // input the number
  printf("from which term you want to multiply natural number :- ");
  scanf("%d", &n);

  // multiply the first n natural number
  for (i = 1; i <= n; i++)
     mul = mul * i;

printf("multiple of first %d natural number is %d", n, mul);
}
