// write a program to find whether a number is divisble by two or not using function

#include <stdio.h>
void odd_or_even(int);

int main()
{
  int num;

  printf("Enter a number :- ");
  scanf("%d", &num);

  odd_or_even(num);
  return 0;
}

void odd_or_even(int num)
{
  if (num % 2 == 0)
      printf("this is even number");

  else
     printf("this is odd number");
}
