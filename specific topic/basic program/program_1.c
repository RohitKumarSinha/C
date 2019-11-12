#include <stdio.h>

int main()
{
  int a, b;

  printf("enter two  integer numbers a and b :- ");
  scanf("%d %d", &a, &b);

  a = a + b; // a = 20 +  b = 30    a = 50
  b = a - b;  // a = 50 - b = 30   b = 20
  a = a - b;  // a = 50 - b = 20   a = 30

  printf("\nafter swapping your number\ta = %d\tb = %d", a, b);

  return 0;
}
