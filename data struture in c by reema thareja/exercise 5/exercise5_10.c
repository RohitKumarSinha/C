// write a program using structure to check if the current year is leap or not

#include <stdio.h>

int main()
{
  typedef struct
  {
    int year;
  }leap;

  leap l1;

  printf("Enter the current year :- ");
  scanf("%d", &l1.year);

  if (l1.year % 4 == 0)
      printf("This is leap year ");

   else
     printf("this is not leap year ");

    return 0;

}
