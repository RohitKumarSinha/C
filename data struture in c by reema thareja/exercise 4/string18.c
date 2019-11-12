// write a program to convert the given string "hello world" to "dlrow olleh".

#include <string.h>
#include <stdio.h>

int main()
{
  char text[100];

  printf("Enter a string or text :- ");
  gets(text);

  strrev(text);

  printf("your new string is %s .", text);

  return 0;
}
