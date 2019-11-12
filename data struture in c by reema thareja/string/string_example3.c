// write a program to append a string to another string.

#include <stdio.h>

int main()
{
  char str[50], text[20];
  int i = 0, k = 0;

  printf("Enter a string :- ");
  gets(str);

  printf("Enter a text you want to append :- ");
  scanf("%s", text);

   while (str[i] != '\0')
   {
     i++;
   }

   while (text[k] != '\0')
   {
     str[i] = text[k];
     i++;
     k++;
   }

   str[i] = '\0';

  printf("\nyour appended string is %s .\n\n", str);

  return 0;
}
