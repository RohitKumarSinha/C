#include <stdio.h>

int main()
{
  int year;

  printf("enter the four digit integer number :- ");
  scanf("%d", &year);

  if (((year % 4 == 0) || (year >= 1000)) && (year % 1 == 0))
  {
    printf("leap year");
  }

  else
  {
    printf("not a leap year");
  }
  return 0;
}
