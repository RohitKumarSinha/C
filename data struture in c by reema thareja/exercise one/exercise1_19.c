/* write a program to take input from the user and then checks whether it is a number or a character.
if it is a character, determine whether it is in upper case or lower case. Also prints its ASCII code */

#include <stdio.h>

  int main()
  {
  char ch;
  int value;

  printf("Enter a character :- ");
  scanf("%c", &ch);

  value = ch;

  if (value >= 97 && value <= 122)
      printf("%c is lower case letter and it's ASCII value is %d\n", ch, value);

  else if (value >= 65 && value <= 90)
      printf("%c is upper case letter and it's ASCII value is %d\n", ch, value);

  else if (value >= 48 && value <= 58)
     printf("%c is a number and it's ASCII value is %d", ch, value);

  else
     printf("%c ASCII value is %d", ch, value);
     
    return 0;
}
