#include <stdio.h>

int main()
{
  int date, month;

  printf("enter the your birth date in integer form :-");
  scanf("%d", &date);

  printf("enter the your birth month in integer form :-");
  scanf("%d", &month);

  if ((month == 12 && date >= 22) || (month == 1 && date <= 19))
  {
    printf("your sun sign is capricon");
  }

  else if ((month == 1 && date >= 20) || (month == 2 && date <= 17))
  {
    printf("your sun sign is aquarius");
  }

  else if ((month == 2 && date >= 18) || (month == 3 && date <= 19))
  {
    printf("your sun sign is pisces");
  }

  else if ((month == 3 && date >= 20) || (month == 4 && date <= 19))
  {
    printf("your sun sign is aries");
  }

  else if ((month == 4 && date >= 20) || (month == 5 && date <= 20))
  {
    printf("your sun sign is taurus");
  }

  else if ((month == 5 && date >= 21) || (month == 6 && date <= 20))
  {
    printf("your sun sign is gemini");
  }

  else if ((month == 6 && date >= 21) || (month == 7 && date <= 22))
  {
    printf("your sun sign is cancer");
  }

  else if ((month == 7 && date >= 23) || (month == 8 && date <= 22))
  {
    printf("your sun sign is leo");
  }

  else if ((month == 8 && date >= 23) || (month == 9 && date <= 22))
  {
    printf("your sun sign is virgo");
  }

  else if ((month == 9 && date >= 23) || (month == 10 && date <= 22))
  {
    printf("your sun sign is libra");
  }

  else if ((month == 10 && date >= 23) || (month == 11 && date <= 21))
  {
    printf("your sun sign is scorpio");
  }

  else if ((month == 11 && date >= 22) || (month == 12 && date <= 21))
  {
    printf("your sun sign is aquarius");
  }

  else
  {
    printf("invalid input");
  }

  return 0;
}
