/* write a program to enter a text that contain multiple lines. Display the n lines of text starting from the
   mth line */


#include <stdio.h>

int main()
{
  char line1[50], line2[50], line3[50];

  printf("Enter the text :- ");

  gets(line1);
  gets(line2);
  gets(line3);

  puts(line1);
  puts(line2);
  puts(line3);

  return 0;
}
