// write a program to find the length of a string

#include <stdio.h>

int main()
{
  char str[30];
  int i = 0;

  printf("enter a string :- ");
  gets(str);

  while(str[i] != '\0')
  {
    i++;
  }

  printf("\nThe length of your string is %d .\n\n", i);

  return 0;
}
