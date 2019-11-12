// A calendar in c program
// it will take input of the year then print every month of that year

#include <stdio.h>
#include <stdlib.h>

// function that checks the first day of the year if the first day is sun then it return 1 for mon it return 2
int get_1st_weekday(int year)
{
  int d;
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}

int main()
{
  int year, starting_day = 0, weekday;
  system("color 1F"); // color of the console

  printf("Enter the any specific year :- ");
  scanf("%d", &year);

  // a pointer char array to store the month name
  char *months[] = {"january", "February", "March", "April", "May", "June", "July", "August", "October", "November", "December" };
  // a int array which store the no of days in each corresponding month
  int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  // checking that the year is leap or not
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  {
    month_days[1] = 29; // if it is leap then store 29 days in February
  }

  // calling the get_1st_weekday and passing the argument as year then store the return value in starting_day
  starting_day = get_1st_weekday(year);

 // looping the month for 12 times
  for (int month = 0; month < 12; month++)
  {
    // store the corresponding days of the month in variable days_in_month
    int days_in_month = month_days[month];
    printf("\n\n----------------------%s--------------------\n", months[month]);
    printf("\n   Sun  Mon  Tue  Wed  Thur  Fri  Sat\n");

     // fill the blanks from where the month start if the month start from monday then it will blank the sunday
     for (weekday = 0; weekday < starting_day; weekday++)
             printf("     ");

    // printing the days
    for (int day = 1; day <= days_in_month; day++)
    {
      printf("% 5d", day);

    // changing the line if the days goes to saturday and assing to 0 again
    if (++weekday > 6)
    {
      printf("\n");
      weekday = 0;
    }
    starting_day = weekday; // changing the starting_day of every month
   }

 }
  return 0;
}
