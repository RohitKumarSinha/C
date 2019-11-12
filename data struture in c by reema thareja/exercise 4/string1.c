// write a program in which a string is passed as an argument to a function

#include <stdio.h>

void display(char name[]);
int main()
{
  char name[30];

  printf("enter your name :- ");
  gets(name);

  display(name);

  return 0;
}

void display (char name[])
{
  printf("Hello, %s", name);
}
