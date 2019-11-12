#include <stdio.h>
void factorial(int);
int main()
{
  int num;
  printf("enter the integer number :- ");
  scanf("%d", &num);
  factorial(num);
  return 0;
}

void factorial(int num)
{
  int c, fact = 1;
  for (c =1; c <= num; c++)
  {
    fact = fact * c;
  }
  printf("the factorial of the number is %d", fact);
}
