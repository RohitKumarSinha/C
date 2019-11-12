// write a program to count the total number of occurences of given character in the strings

#include <stdio.h>

int main()
{
  char text[100];
  int count = 0, i = 0;

  printf("Enter the text :- ");
  gets(text);

  while (text[i] != '\0')
  {
    count++;
    i++;
  }

  printf("total number in your string is %d. ", count);

  return 0;
}
