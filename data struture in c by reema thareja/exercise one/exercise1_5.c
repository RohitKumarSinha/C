/* write a program to read two floating point numbers. Add these numbers and assign the result to an
integer. Finally, display the value of all three variables */


#include <stdio.h>
int main()
{
  float num1, num2, sum;
  int add;

  printf("Enter two real numbers : \n");
  scanf("%f %f", &num1, &num2);

  sum = num1 + num2;
  add = sum;

  printf("sum of these real number in int mode is :-  %d\n", add);
  printf("value of all three real variables are %f %f %f", num1, num2, sum);

  return 0;
}
a
