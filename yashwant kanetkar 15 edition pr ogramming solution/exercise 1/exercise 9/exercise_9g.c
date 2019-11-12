#include <stdio.h>
int gcd (int *, int *);
int main()
{
  int x, y, res;
  printf("enter the two integer number to find out the value of gcd :- \n");
  scanf("%d %d", &x, &y);

  res = gcd(&x, &y);

  printf("the gcd of x and y is %d", res);
  return 0;
}

int gcd (int *a, int *b)
{
  int temp;
  while (*b != 0)
  {
     temp = *a % *b;
        *a = *b;
        *b = temp;
  }
   return *a;
}
