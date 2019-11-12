// write a program to find whether a string is a palindrome or not

#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  int i = 0, length, flag = 0;

  printf("Enter a string :- ");
  gets(str);

  length = strlen(str) - 1;

  while(str[i] != '\0')
  {
    if (str[i] != str[length])
    {
      flag = 1;
      printf("This is not palindrome");
      break;
    }

    i++;
    length--;
  }

  if (flag == 0)
     printf("this is palindrome");

    return 0;
}
