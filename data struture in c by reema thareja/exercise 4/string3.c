// write a program in c that compares first n characters of one string with n characters of another string

#include <string.h>
#include <stdio.h>

int main()
{
  char first[30], second[30];

  printf("Enter the first string :- ");
  gets(first);

  printf("Enter the second string :- ");
  gets(second);

  if ((strcmp(first, second)) == 0)
  {
    printf("Both the strings are not equal ");
  }

  else
   {
     printf("Both the strings are equal ");
   }

   return 0;
}
