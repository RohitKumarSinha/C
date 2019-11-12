// write a program to find the smallest of three integers using functions

#include <stdio.h>
int min(int, int, int);

int main()
{
  int num1, num2, num3, res;

  printf("Enter three integers numbers : ");
  scanf("%d %d %d", &num1, &num2, &num3);

  res = min(num1, num2, num3);

  printf("smallest of all integers is :- %d", res);
  return 0;
}

int min(int a, int b, int c)
{
  return (a < b ? (a < c ? a : c) : (b < c ? b : c));
}
