#include <stdio.h>

int main()
{
  int num, rem;

  rem = 0;

  printf("enter a integer number :- ");
  scanf("%d", &num);

  while (num != 0)
  {
    rem = num % 8;
    printf("%d", rem);
    num = num / 10;
  }
  return 0;
}
