// write a program to reverse a string

#include <stdio.h>
#include <string.h>

int main()
{
  char str[100], temp;
  int i = 0, j = 0;


  printf("enter a string :- ");
  gets(str);

  j = strlen(str) - 1;

  while (i < j)
  {
    temp = str[j];
    str[j] = str[i];
    str[i] = temp;

    i++;
    j--;
  }

  printf("The reverse string is %s .", str);

  return 0;
}
