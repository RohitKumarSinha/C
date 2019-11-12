#include <stdio.h>

int main()
{
   int num, larg, small, choice, i;

   printf("enter the largest number :- ");
   scanf("%d", &larg);

   printf("enter the smallest number :- ");
   scanf("%d", &small);

   printf("how many number you want to add in the list :- ");
   scanf("%d", &choice);

   i = 0;

   while (i < choice)
   {
     printf("enter a number :- \n");
     scanf("%d", &num);

     if (num > larg)
     {
       printf("this number is largest number\n");
     }

     else if (num < small)
     {
       printf("this number is smallest number\n");
     }

     i += 1;

   }

  return 0;
}
