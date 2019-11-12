// modify the above program to add a specific number of days to the given date :

#include <stdio.h>
#include <stdlib.h>

void add_date(int, int, int);

int main()
{
  typedef struct
  {
    int yy, mm, dd;
  }date;

  date d;

  printf("Enter the date  in dd mm yy format :- ");
  scanf("%d %d %d", &d.dd, &d.mm, &d.yy);

  if (d.yy % 4 != 0)
  {
    printf("This is not leap year so it is invalid date ");
    exit(0);
  }

   switch (d.mm)
   {
     case 1:

     if (d.dd > 31)
        printf("This is invalid date ");

      else
         add_date(d.dd, d.mm, d.yy);
        break;

     case 2:

     if (d.dd > 29)
        printf("This is invalid date ");

        else
           add_date(d.dd, d.mm, d.yy);
        break;

    case 3:

     if (d.dd > 30)
         printf("This is invalid date ");

         else
            add_date(d.dd, d.mm, d.yy);
         break;

    case 4:

      if (d.dd > 31)
        printf("This is invalid date ");

        else
           add_date(d.dd, d.mm, d.yy);
        break;

    case 5:

       if (d.dd > 30)
          printf("this is invalid date ");

          else
             add_date(d.dd, d.mm, d.yy);
          break;

    case 6:

        if (d.dd > 31)
            printf("this is invalid date ");

            else
               add_date(d.dd, d.mm, d.yy);
            break;

    case 7:

        if (d.dd > 30)
            printf("this is invalid date ");

            else
               add_date(d.dd, d.mm, d.yy);
            break;

    case 8:

        if (d.dd > 31)
            printf("this is invalid date ");

            else
               add_date(d.dd, d.mm, d.yy);
            break;

    case 9:

        if (d.dd > 30)
            printf("this is invalid date ");

            else
               add_date(d.dd, d.mm, d.yy);
            break;

    case 10:
         if (d.dd > 31)
            printf("this is invalid date ");

            else
               add_date(d.dd, d.mm, d.yy);
            break;

    case 11:

        if (d.dd > 30)
            printf("this is invalid date ");

            else
               add_date(d.dd, d.mm, d.yy);
            break;

    case 12:

        if (d.dd > 31)
           printf("this is invalid date ");

           else
              add_date(d.dd, d.mm, d.yy);
           break;


   }

  return 0;
}

void add_date(int days, int month, int year)
{
  int date;

  printf("How many days you want to add given specific date :- ");
  scanf("%d", &date);

  days = date + days;

  if (month == 1 && days > 30)
  {
    month += days / 31;
    days = days % 31;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }

  else if (month == 2 && days > 29)
  {
    month += days / 29;
    days = days % 29;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }

  else if (month == 3 && days > 30)
  {
    month += days / 30;
    days = days % 30;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }

  else if (month == 4 && days > 31)
  {
    month += days / 31;
    days = days % 31;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }

  else if (month == 5 && days > 30)
  {
    month += days / 30;
    days = days % 30;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }

  else if (month == 6 && days > 31)
  {
    month += days / 31;
    days = days % 31;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }


  else if (month == 7 && days > 30)
  {
    month += days / 30;
    days = days % 30;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }

  else if (month == 8 && days > 31)
  {
    month += days / 31;
    days = days % 31;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }

  else if (month == 9 && days > 30)
  {
    month += days / 30;
    days = days % 30;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }

  else if (month == 10 && days > 31)
  {
    month += days / 31;
    days = days % 31;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }

  else if (month == 11 && days > 30)
  {
    month += days / 30;
    days = days % 30;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }


  else if (month == 12 && days > 31)
  {
    month += days / 31;
    days = days % 31;

    if (month > 12)
    {
      year += month / 12;
      month = month % 12;
    }

    printf("Now your date is %d / %d / %d", days, month, year);
  }
}
