#include <stdio.h>
int fib(int);
int main()
{
  int num, i;

  num = 25;
  for(i = 1; i<= num; i++)
  printf("%d\t", fib(i));
  return 0;
}

int fib(int n)
{
  if (n == 1 || n == 2)
     return 1;

  else
    return (fib(n-1) + fib(n - 2));
}
