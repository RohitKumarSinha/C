// write a program to compare two strings

#include <stdio.h>
int length (char str[]);

int main()
{
  char str[30], ano_str[30];
  int first_len, sec_len, i = 0, j = 0;

  printf("Enter the first string :- ");
  gets(str);

  printf("Enter the second string :- ");
  gets(ano_str);

  first_len = length(str);
  sec_len = length(ano_str);

  if (first_len != sec_len)
  {
    printf("invalid strings to compare : ");
  }

  else
  {
    while (str[i] != '\0')
    {
      if (str[i] == ano_str[i])
      {
        i++;
      }

      else if (str[i] < ano_str[j])
      {
        printf("second string is greater than first string ");
        break;
      }

      else if (str[i] > ano_str[j])
      {
        printf("first string is greater than second string ");
        break;
      }
    }
  }

  if (first_len == i)
     printf("both strings are equal");

  return 0;
}

int length (char str[])
{
  int i = 0;

  while (str[i] != '\0')
  {
    i++;
  }

 return i;
}
