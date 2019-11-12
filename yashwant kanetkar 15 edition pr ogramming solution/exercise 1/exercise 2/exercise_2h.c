#include <stdio.h>

int main()
{
  int a, b, c;
  printf("enter two numbers a and b :-\n");
  scanf("%d %d", &a, &b);

  c = a;
  a = b;
  b = c;

  printf ("now your a is %d and b is %d", a, b);
  return 0;
}
