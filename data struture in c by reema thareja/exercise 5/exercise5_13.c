/* Define a structure date containing three integers -

  day, month, and year. write a program using functions to read data, to validate the data entered by the user and then
  print the date on the screen. For example, if you entered 29, 2, 2010 then that is invalid date as 2010 is not a leap
  year. similarly 31, 6, 2007 is invalid as june does not have 31 days */

#include <stdio.h>
#include <stdlib.h>

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
        break;

     case 2:

     if (d.dd > 29)
        printf("This is invalid date ");
        break;

    case 3:

     if (d.dd > 30)
         printf("This is invalid date ");
         break;

    case 4:

      if (d.dd > 31)
        printf("This is invalid date ");
        break;

    case 5:

       if (d.dd > 30)
          printf("this is invalid date ");
          break;

    case 6:

        if (d.dd > 31)
            printf("this is invalid date ");
            break;

    case 7:

        if (d.dd > 30)
            printf("this is invalid date ");
            break;

    case 8:

        if (d.dd > 31)
            printf("this is invalid date ");
            break;

    case 9:

        if (d.dd > 30)
            printf("this is invalid date ");
            break;

    case 10:
         if (d.dd > 31)
            printf("this is invalid date ");
            break;

    case 11:

        if (d.dd > 30)
            printf("this is invalid date ");
            break;

    case 12:

        if (d.dd > 31)
           printf("this is invalid date ");
           break;

  
   }

  return 0;
}
