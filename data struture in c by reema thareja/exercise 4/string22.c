/* write a program to copy last n characters of a character array with another character array. also, convert
   the lower case letters into upper case letters while copying */

#include <stdio.h>
#include <string.h>

int main()
{
  char str[100], copy_str[100];

  printf("Enter a string or text :- ");
  gets(str);

  strcpy(copy_str, str);
  strupr(copy_str);

  printf("\n\nHere is the copy of your string \n\n");
  printf("%s\n\n", copy_str);

  return 0;
}
