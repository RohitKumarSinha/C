// write a program to find smallest of three numbers using structures

#include <stdio.h>

typedef struct numbers
{
  int num1, num2, num3;
}num;

int main()
{
   num n1;

   printf("enter the three integer numbers :- \n");
   scanf("%d %d %d", &n1.num1, &n1.num2, &n1.num3);

   n1.num1 < n1.num2 ? (n1.num1 < n1.num3 ? printf("%d is smallest", n1.num1) : printf("%d is smallest", n1.num3)) : (n1.num2 < n1.num3 ? printf("%d is smallest", n1.num2 ) : printf("%d is smallest", n1.num3));

   return 0;
}
