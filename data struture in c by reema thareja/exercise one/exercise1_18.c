// write a program to add three floating point numbers. the result should contain only two digit after the decimal

#include <stdio.h>

int main()
{
  float num1, num2, num3, sum;

  printf("Enter three real numbers : \n");
  scanf("%f %f %f", &num1, &num2, &num3);

  sum = num1 + num2 + num3;

  printf("after adding all three numbers your result is :- %.2f", sum);

  return 0;
}
