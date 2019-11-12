// write a program in c to concatenate first n characters of a string with another string

#include <stdio.h>
#include <string.h>

int main()
{
  char name[30], tittle[30];

  printf("enter your name :- ");
  scanf("%s", name);

  printf("enter your tittle name :- ");
  scanf("%s", tittle);

  printf("your full name is %s.", strcat(name, tittle));

  return 0;
}
