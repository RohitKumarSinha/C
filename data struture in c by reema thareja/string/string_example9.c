// write a program to replace a pattern with another pattern in the text

#include <stdio.h>

int main()
{
  char str[50], replaced[20], rep_patt[20];
  int i = 0, j = 0, k = 0;

  printf("enter a string :- ");
  gets(str);

  printf("enter the pattern to be replaced:- ");
  gets(replaced);

  printf("enter the replacing pattern :- ");
  gets(rep_patt);

  while (str[i] != '\0')
  {
    while (str[i] == replaced[j] && replaced[j] != '\0')
    {
      str[i] = rep_patt[k];
      k++;
      i++;
      j++;
    }

    i++;
  }

  printf("your new string is %s.", str);

  return 0;
}
