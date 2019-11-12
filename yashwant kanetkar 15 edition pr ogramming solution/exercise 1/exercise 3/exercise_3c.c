#include <stdio.h>

int main()
{
  int year;
  printf("enter any year of integer form :- \n");
  scanf("%d", &year);

  if (year %  4 == 0)
  {
    printf("leap year");
  }

  else
  {
    printf("not a leap year");
  }
  return 0;

}
