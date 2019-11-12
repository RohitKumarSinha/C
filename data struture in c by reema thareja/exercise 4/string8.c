/* write a program to accept a text. count and display the number of times the word 'the' appears in the text */

#include <stdio.h>

int main()
{
  char text[100];
  int i = 0, count = 0;


  printf("Enter the text :- ");
  gets(text);

  while (text[i] != '\0')
  {
    count++;
    i++;
  }

  while (count != 0)
  {
    printf("The\n");
    count--;
  }

  return 0;  
}
