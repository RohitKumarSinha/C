#include <stdio.h>

int main()
{
  int num1;
  float num;

  printf("enter any number :- ");
  scanf("%f", &num);

  if (num >= 0)
  {
    num1 = ceil(num);
    printf("absolute number is %d", num1);
  }

  else if (num < 0)
  {
    num1 = -(ceil(num));
    printf("absolute number is %d", num1);
  }

  else
  {
    printf("invalid input");
  }
  return 0;
}
