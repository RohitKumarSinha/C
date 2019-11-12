#include <stdio.h>

int main()
{

  int year;

  printf("enter the year in integer form :-");
  scanf("%d", &year);

  ((year % 4 == 0) ? printf("this is leap year") : printf("this is not leap yeap"));
  
  return 0;
}
