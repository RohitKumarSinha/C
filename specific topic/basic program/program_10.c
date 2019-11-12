// reverse an string using strrev function
#include <stdio.h>
#include <string.h> // pre-processor file for string operation

int main()
{
  char s[30];

  // input the string
  printf("enter the string :- ");
  gets(s);

  // reverse the string using strrev function
  strrev(s);

  // print the reverse string
  printf("the reverse string is %s", s);
}
