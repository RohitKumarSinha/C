#include <stdio.h>
#include <math.h>

int main()
{
  int x, y;
  float r, theta;

  printf("enter the value of coordinates :- \n");
  scanf("%d %d", &x ,&y);

  r = sqrt(x * x + y *y);
  theta = atan(y / x);

  printf("the value in polar coordinates is %f and %f", r, theta);

  return 0;
}
