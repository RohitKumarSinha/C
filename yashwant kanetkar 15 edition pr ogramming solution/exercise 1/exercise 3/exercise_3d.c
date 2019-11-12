#include <stdio.h>

int main()
{
  int year, year1, result;

  printf("enter the year in four digit integer form:- ");
  scanf("%d", &year);

  year1 = 2000;
  result = year - year1;

  if ((result <= 7 ) || (result > 7))
  {
    result = result % 7 ;

    if (result == 1)
    {
      printf("it's monday");
    }

    else if (result == 2)
    {
    printf("it's tuesday");
    }

    else if (result == 3)
    {
    printf("it's wednesday");
    }
    else if (result == 4)
    {
    printf("it's thursday");
    }
    else if (result == 5)
    {
    printf("it's friday");
    }
    else if (result == 6)
    {
    printf("it's saturday");
    }
    else if (result == 0)
    {
    printf("it's sunday");
    }

  }

  if (result <= 0)
  {
    result = result % 7 ;

    if (result == -1)
    {
      printf("it's saturday");
    }

    else if (result == -2)
    {
    printf("it's friday");
    }

    else if (result == -3)
    {
    printf("it's thursday");
    }
    else if (result == -4)
    {
    printf("it's wednesday");
    }
    else if (result == -5)
    {
    printf("it's tuesday");
    }
    else if (result == -6)
    {
    printf("it's monday");
    }
    else if (result == 0)
    {
    printf("it's sunday");
    }
    else
    {
      printf("invalid input");
    }
  }

  return 0;
}
