// write a program to rewrite the string "Good morning" to "Good evening"

#include <stdio.h>

int main()
{
  char str[100], sou_str[20], des_str[20];
  int i = 0, j = 0, k = 0;

  printf("Enter a string or text :- ");
  gets(str);

  printf("Enter the string to change :- ");
  gets(sou_str);

  printf("Enter the string you want to replace from :- ");
  gets(des_str);

  while (str[i] != '\0')
  {
    while (str[i] == sou_str[j] && sou_str != '\0')
    {
      str[i] = des_str[k];
      i++;
      j++;
      k++;
    }
    i++;
  }

  printf("your new string is %s", str);

  return 0;
}
