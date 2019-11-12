// extern storage class
#include <stdio.h>

int main()
{
  int x = 0;
  printf("x = %d", x);
  x++;
  printf("x = %d", x);
  f1();
  return 0;
}

extern int x;

void f1()
{
  int x = 0;
  printf("x = %d", x);
}
