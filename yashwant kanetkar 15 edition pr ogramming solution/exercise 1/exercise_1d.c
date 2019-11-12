#include <stdio.h>

int main()
{
  float fah, cel;

  printf("Enter the temperature in fahrenheit :-");
  scanf("%f", &fah );

  cel = (fah - 32) * 0.5556;
  printf("your temperature in celsius is %f" ,cel);

  return 0;
}
