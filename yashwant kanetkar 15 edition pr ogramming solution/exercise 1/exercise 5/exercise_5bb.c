#include <stdio.h>

int main()
{
  int num, res;

  printf("enter any integer number :- ");
  scanf("%d", &num);

  res = 1;

  while (num > 1)
  {
    res *= num;
    num -= 1;
  }

  if (num == 1)
  {
    res *= 1;
  }

  printf("factorial of that number is %d", res);
  return 0;
}
