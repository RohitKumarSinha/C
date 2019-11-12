// write a program to add two floating numbers using pointers and functions

#include <stdio.h>

int main()
{
  float sum, num_one, num_two;
  float  *first_num, *sec_num;

  printf("Enter two numbers : \n");
  scanf("%f %f", &num_one , &num_two);

  first_num = &num_one;
  sec_num = &num_two;

  sum = *first_num + *sec_num;

  printf("the sum of your number is %.2f", sum);
}
