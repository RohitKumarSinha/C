// write a program to concatenate two given strings "GOOD MORNING" and "World". Display the resultant string.

#include <stdio.h>
#include <string.h>

int main()
{
  char str[100], word[20];

  printf("Enter the string :- ");
  gets(str);

  printf("Enter the word :- ");
  gets(word);


  printf("%s are the concatenate string .", strcat(strcat(str," "), word));

  return 0;
}
