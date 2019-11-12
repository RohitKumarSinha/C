#include <stdio.h>
void leap(int);
int main()
{
  int year;
  printf("enter the year in integer form :- ");
  scanf("%d", &year);
  leap(year);
  return 0;
}

void leap(int year1)
{
   if (year1 % 4 == 0)
       printf("this is leap year");

   else
       printf("this is not leap year");
}
