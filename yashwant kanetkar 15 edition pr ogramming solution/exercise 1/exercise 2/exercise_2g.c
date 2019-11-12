#include <stdio.h>
#include <math.h>

int main()
{

  float input;

  printf("enter the value in degree we will convert it into all trigometric ratio :- ");
  scanf("%f", & input);

  printf(" sin(%f) = %f\n",input, sin(input));
  printf(" cos(%f) = %f\n",input, cos(input));
  printf(" tan(%f) = %f\n",input, tan(input));
  printf(" exp(%f) = %f\n",input, exp(input));
  printf(" log(%f) = %f\n",input, log(input));

  return 0;
}
