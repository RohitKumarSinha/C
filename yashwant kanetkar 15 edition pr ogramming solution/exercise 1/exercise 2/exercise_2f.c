#include <stdio.h>
#include <math.h>

int main()
{

  float temp, velo, wcf;

  printf("enter the temprature and velocity of the wind :- \n");
  scanf("%f %f", &temp, &velo);

  wcf = 35.74 + (0.6215 * temp) + ((0.4275 * temp) - 35.75) * pow(velo , 0.16);
  printf("the wind chill factor is %f", wcf);
  return 0;
}
