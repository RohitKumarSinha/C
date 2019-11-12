// write a program to count the number of vowels in text

#include <stdio.h>
#include <string.h>

int main()
{
  char text[100];
  int len, count = 0;

  printf("Enter a text : \n");
  gets(text);

  len = strlen(text);

  for (int i = 0; i < len; i++)
  {
    if (text[i] == 'a' || text[i] == 'A' || text[i] == 'e' || text[i] == 'E' || text[i] == 'i' || text[i] == 'I' || text[i] == 'o' || text[i] == 'O' || text[i] == 'u' || text[i] == 'U')
       count++;
  }

  printf("Total numbers of vowel in your text is :-  %d", count);

  return 0;
}
