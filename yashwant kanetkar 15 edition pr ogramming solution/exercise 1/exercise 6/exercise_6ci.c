#include <stdio.h>
#include <math.h>

int main()
{
  int x, i, j;
  float sum, power;


  printf("enter the integer value of x :- ");
  scanf("%d", &x);

  for (i = 1 ; i <= 6 ; i++)
  {
      sum =  0.5 * ((x - 1) / x);
      power = pow(sum , 2);

  }

  printf("%f", 49 / 50);



  return 0;
}
