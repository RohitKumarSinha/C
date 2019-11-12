// write a program to convert lower case characters of a string into upper case

#include <stdio.h>

int main()
{
  char str[30], new_str[30];
  int i = 0;

  printf("Enter a string :- ");
  gets(str);

  while (str[i] != '\0')
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;
    }

    else
    {
      str[i] = str[i];
    }

    i++;
  }

  printf("\nyour new string is %s\n\n", str);

  return 0;
}
