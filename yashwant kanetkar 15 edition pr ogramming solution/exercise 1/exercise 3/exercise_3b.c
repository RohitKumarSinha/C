#include <stdio.h>

int main()
{

  int num;

  printf("enter a integer number :- ");
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    printf("this is even number .");
  }

  else if (num % 2 == 1)
  {
    printf("this is odd number .");
  }

  else
  {
    printf("invalid input .");
  }
  
  return 0;
}
