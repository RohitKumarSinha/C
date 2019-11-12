// write a program to reverse a list of given number

#include <stdio.h>
#include <stdlib.h>

int top = -1;
int st[10];

void push(int val);
int pop(void);

int main()
{
  int num, val;

  printf("enter how many number you want to push in the stack :- \n");
  scanf("%d", &num);

  if (num <= 10)
  {
    printf("enter the number :- \n");
   for (int i = 0; i < num; i++)
   {
     scanf("%d", &st[i]);
   }

   for (int i = 0; i < num; i++)
   {
     push(st[i]);
   }

   printf("Now your number is : \n");
   for (int i = 0; i < num; i++)
   {
     val = pop();
     printf("%d\t", val);
   }

  }

  else
  {
    printf("please enter your number less than 10 or equal to 10");
  }
  return 0;
}


void push(int val)
{
  top++;
  st[top] = val;
}

int pop()
{
  int val;
  val = st[top];
  top--;

  return val;
}
