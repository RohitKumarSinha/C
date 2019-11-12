#include <stdio.h>
int main()
{
  int choice, num, c, fact = 1, n;

  while (n = 1)

  {

  printf("press 1 for find out factorial of a number : \n");
  printf("press 2 for find out a number is prime or not : \n");
  printf("press 3 for find out a number is even or not : \n");
  printf("press 4 for exit the program :- \n");
  scanf("%d", &choice);

  switch (choice)
  {
    case 1:

        printf("enter a number which you find out factorial :- ");
        scanf("%d", &num);
        c = num;

       while (num != 0)
       {

          fact = fact * num;
          num = num - 1;
       }

       printf("the factorial of is %d is %d\n", c, fact);
       break;

    case 2:

       printf("enter a number :- ");
       scanf("%d", &num);

           for (c = 2; c <= num - 1; c++)
              if (num % c == 0)
                 break;

      if (num == c)
           printf("this is prime number\n");

      else
          printf("this is not prime number\n");

      break;

    case 3:

        printf("enter an integer number :-");
        scanf("%d", &num);

        if (num % 2 == 0)
           printf("this is even\n");

       else
           printf("this is odd\n");

        break;

    case 4:

        printf("you are going to exit the program");
        exit(0);

    default:
        printf("hey! please enter 1, 2, 3 or 4 in integer form\n");

  }
}

  return 0;
}
