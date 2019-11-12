#include <stdio.h>
#include <math.h>

int main()
{

  float num;
  int result;

  printf("enter the degree value :- ");
  scanf("%f", &num);

  result = pow(sin(num) + cos(num), 2);

  if (result == 1)
  {
    printf("sum of squares of sine and cosine of this angle is equal to 1");
  }

  else
  {
    printf("sum of squares of sine and cosine of this angle is equal to %d", result);
  }

  return 0;
}
