// write a program to read the address of a user. Display the result by breaking it in multiple lines

#include <stdio.h>
#include <string.h>

int main()
{

  char address[100];
  int len;

  printf("Enter the address : \n");
  gets(address);

  len = strlen(address);

  printf("\n");
  for (int i = 0; i < len; i++)
  {
    if (address[i] == ' ')
       printf("\n");

    else
       printf("%c", address[i]);
  }

    return 0;
}
