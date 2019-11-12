#include <stdio.h>
#include <math.h>
void power(int, int);
int main()
{
  int n1, n2;

  printf("enter the two number :- \n");
  scanf("%d %d", &n1, &n2);

  power(n1, n2);
  return 0;
}

void power(int a, int b)
{
  int res;
  res = pow(a, b);

  printf("the power of %d raised to %d and the value is %d", a, b, res);
}
