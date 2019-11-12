// write a program to count the total number of occurences of a word in the text

#include <stdio.h>

int main()
{
  char str[100];
  int i = 0, word = 1;

  printf("Enter a string :- ");
  gets(str);

  while (str[i] != '\0')
  {
    if (str[i] == ' ')
    {
      word++;
    }

    i++;
  }

  printf("Total words in your string is %d", word);

  return 0;
}
