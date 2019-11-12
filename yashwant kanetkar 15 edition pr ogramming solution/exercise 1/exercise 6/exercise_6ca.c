#include <stdio.h>

int main()
{
  int num, c;

  printf("enter a number :-");
  scanf("%d", &num);

  for (c = 2; c <= num - 1; c++)
     if(num % c == 0)
       break;

if (num == c)
     printf("this is prime number");

else
   printf("this is not prime number");

  return 0;
}
