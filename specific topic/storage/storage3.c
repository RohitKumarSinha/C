// static storage class
#include <stdio.h>

int main()
{
  f1();
  f1();

  return 0;
}

void f1()
{
  static int i;
  i++;
  printf("i = %d", i);
}
