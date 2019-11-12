#include <stdio.h>

int main()
{
  int num, c, fact = 1, res;

  num = 3;

  for (c = 1 ; c <= num; c++)
  {
    fact = (fact * c);
    res = fact / c;
  }

  printf("adding first seven terms = %d", res);
  return 0;
}
