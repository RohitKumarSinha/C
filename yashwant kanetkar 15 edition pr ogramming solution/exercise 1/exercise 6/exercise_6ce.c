#include <stdio.h>

 int main()
 {
   int year = 0 , inv , altn;

   while (altn > inv)
   {

     year++;
     altn = (90 * year);
     printf("alternate = %d\n", altn);
     inv = (1000 * year) - 4000;
     printf("investment = %d\n", inv);

   }

   printf("the minimm year is %d", year);
   return 0;
 }
