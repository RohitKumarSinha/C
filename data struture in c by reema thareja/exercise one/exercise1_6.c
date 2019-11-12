/* write a program to read a floating point number. display the rightmost digit of the integral part of the
 number */

#include <stdio.h>

int main()
{
  int num;
  float num1;

  printf("enter a number :-  ");
  scanf("%f", &num1);

  num = num1;
  num1 = num1 - num;

  printf("rightmost digit of the integral part of the number is %.1f", num1);

  return 0;
}
