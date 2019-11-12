// write a program to enter a number and break it into n number of digits

#include <stdio.h>

int main()
{
  int n;

  printf("enter a integer number :- ");
  scanf("%d", &n);

  int l;

  while (n != 0)
  {
    l = n % 10;
    printf("%d\t", l);

    n = n / 10;

  }

  return 0;
}
