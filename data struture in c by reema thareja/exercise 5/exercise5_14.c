/* using the structure defination of the above program, write a function to increment the date. Make sure that the
   incremented date is a valid date */


   #include <stdio.h>
   #include <stdlib.h>

   typedef struct
   {
     int yy, mm, dd;
   }date;

  void incre_date(int, int);
  
   int main()
   {

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
          incre_date(d.dd, d.mm);
           break;

        case 2:

        if (d.dd > 29)
           printf("This is invalid date ");

           else
             incre_date(d.dd, d.mm);
           break;

       case 3:

        if (d.dd > 30)
            printf("This is invalid date ");

            else
              incre_date(d.dd, d.mm);
            break;

       case 4:

         if (d.dd > 31)
           printf("This is invalid date ");

           else
             incre_date(d.dd, d.mm);
           break;

       case 5:

          if (d.dd > 30)
             printf("this is invalid date ");

             else
               incre_date(d.dd, d.mm);
             break;

       case 6:

           if (d.dd > 31)
               printf("this is invalid date ");

               else
                 incre_date(d.dd, d.mm);
               break;

       case 7:

           if (d.dd > 30)
               printf("this is invalid date ");

               else
                 incre_date(d.dd, d.mm);
               break;

       case 8:

           if (d.dd > 31)
               printf("this is invalid date ");

               else
                 incre_date(d.dd, d.mm);
               break;

       case 9:

           if (d.dd > 30)
               printf("this is invalid date ");

               else
                 incre_date(d.dd, d.mm);
               break;

       case 10:
            if (d.dd > 31)
               printf("this is invalid date ");

               else
                 incre_date(d.dd, d.mm);
               break;

       case 11:

           if (d.dd > 30)
               printf("this is invalid date ");

               else
                 incre_date(d.dd, d.mm);
               break;

       case 12:

           if (d.dd > 31)
              printf("this is invalid date ");

              else
                incre_date(d.dd, d.mm);
              break;


      }

     return 0;
   }


void incre_date(int date, int month)
{
  switch (month)
  {
    case 1:

    for (date; date <= 31; date++)
    {
      printf("%d\t", date);
    }

    break;

    case 2:

    for (date; date <= 29; date++)
    {
      printf("%d\t", date);
    }

    break;

    case 3:

    for (date; date <= 30; date++)
    {
      printf("%d\t", date);
    }

    break;

    case 4:

    for (date; date <= 31; date++)
    {
      printf("%d\t", date);
    }

    break;

    case 5:

    for (date; date <= 30; date++)
    {
      printf("%d\t", date);
    }

    break;

    case 6:

    for (date; date <= 31; date++)
    {
      printf("%d\t", date);
    }

    break;

    case 7:

    for (date; date <= 30; date++)
    {
      printf("%d\t", date);
    }

    break;

    case 8:

    for (date; date <= 31; date++)
    {
      printf("%d\t", date);
    }

    break;


    case 9:

    for (date; date <= 30; date++)
    {
      printf("%d\t", date);
    }

    break;

    case 10:

    for (date; date <= 31; date++)
    {
      printf("%d\t", date);
    }

    break;

    case 11:

    for (date; date <= 30; date++)
    {
      printf("%d\t", date);
    }

    break;

    case 12:

    for (date; date <= 31; date++)
    {
      printf("%d\t", date);
    }

    break;
  }
}
