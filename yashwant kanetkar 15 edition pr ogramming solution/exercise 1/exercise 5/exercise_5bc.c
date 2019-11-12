#include <stdio.h>
#include <math.h>

int main()
{
  int n1, n2, res;

  res = 0;

  printf("enter two integer number :- \n");
  scanf("%d %d", &n1, &n2);

  res = pow(n1, n2);

  printf("%d raise to the power of %d and the result is %d", n1, n2, res);
  return 0;
}
