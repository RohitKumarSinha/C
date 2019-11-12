/* write a program to read a character and print it. Also print its ASCII value. if the character is in
 lower case, print it in upper case and vice versa. Repeat the process until '*' is entered */

#include <stdio.h>
#include <stdlib.h>

 int main()
 {
   printf("To terminate the program press '*' otherwise program will continue infinity\n\n");
   while(1)
  {
    char ch;
    int value;

    printf("Enter a character :- ");
    fflush(stdin);
    scanf("%c", &ch);

    value = ch;

    if (ch == '*')
        exit(0);

    else if (value >= 97 && value <= 122)
        printf("%c is lower case letter and it's ASCII value is %d\n", ch, value);

    else if (value >= 65 && value <= 90)
        printf("%c is upper case letter and it's ASCII value is %d\n", ch, value);

    else
       printf("%c ASCII value is %d\n", ch, value);
  }

  return 0;
 }
