// write a program to covert the given string "GOOD MORNING" to "good morning"

#include <stdio.h>
#include <ctype.h> // for the function like tolower
#include <string.h> // for the function like strlwr
int main()
{
  char str[100];
  int i  = 0;

  printf("Enter a string :- ");
  gets(str);

  // strlwr is a function that covert upper case into lower case of the string
  printf("Now, your string is %s \n\n", strlwr(str));

  // tolower is a function that convert upper case into lower case of the character
  while (str[i] != '\0')
  {
    printf("%c", tolower(str[i]));
    i++;
  }

  return 0;
}
