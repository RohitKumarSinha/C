// write a program to check whether the two given strings "Good morning" and "GOOD MORNING" are same.

#include <string.h>
#include <stdio.h>

int main()
{
  char str[100], text[100];
  int result;

  printf("Enter a string or text :- ");
  gets(str);

  printf("Enter anoher string or text :- ");
  gets(text);

  result = strcmp(str, text);

  if (result == 0)
  {
    printf("both strings or text are match ");
  }

  else
  {
    printf("Both strings are not equal ");
  }

  return 0;
}
