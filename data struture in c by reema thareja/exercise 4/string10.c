// write a program to find the last instance of occurence of a sub-string within a string

#include <stdio.h>

int main()
{
  char str[100];
  int i = 0, word = 0, j = 0, match_word = 0, pos = 0;

  printf("Enter the string :- ");
  gets(str);


  // this loop is for find how many words in our string
  while (str[i] != '\0')
  {
    if (str[i] == ' ')
    {
      word++;
    }
    i++;
  }

  // we decrement here because the words are going before the last word otherwise it goes to the null character
  word--;

  // find the position of where the last word started
  while (str[j] != '\0')
  {
    if (str[j] == ' ')
    {
      match_word++;
    }

    if (match_word == word)
    {
      pos = j + 2; // here we increment by 2 because one for white space and one for character of last word
    }
    j++;
  }

  // printing the value of the last words of our text
  while (str[pos] != '\0')
  {
    printf("%c", str[pos]);
    pos++;
  }

  return 0;
}
