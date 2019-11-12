#include <stdio.h>
#include <math.h>

int main()
{
  int p, r, n, q, a, i, j, product;
  float amt = 1;

  for (i = 0; i < 10; i++)
  {
    amt = 1;
    printf("enter the values if p, r, n, and q : -\n");
    scanf("%d %d %d %d", &p, &r, &n, &q);

    product = n * q;

    amt = pow(p *(1 + (r/q)), product);

    printf("your value is %d\n", amt);
  }

  return 0;
}
