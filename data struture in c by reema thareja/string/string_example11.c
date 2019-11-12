// write a program to read multiple lines of text and then count the numbers of characters words, and lines in the text

#include <stdio.h>

int main()
{
  char str[100];
  int i = 0, words = 0, line = 0, characters = 0;

  printf("enter the text : \n");
  gets(str);

  while (str[i] != '\0')
  {
    if (str[i] == ' ')
        words++;

     else if (str[i] == '\n')
        line++;

     else
       characters++;

    i++;
  }

  printf("your string is %s\n", str);
  printf("total numbers of words are %d\n", words + 1);
  printf("total numbers of lines are %d\n", line + 1);
  printf("total numbers of characters are %d\n", characters);

  return 0;
}
