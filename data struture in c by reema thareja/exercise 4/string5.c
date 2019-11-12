// write a program in c that replaces a given character in a string

#include <stdio.h>

int main()
{
  char name[30], ch, putin;
  int i = 0;

  printf("Enter the string :- ");
  gets(name);

  printf("enter the character which you want to remove :- ");
  scanf("%c", &ch);

  fflush(stdin);

  printf("Enter the character which you want to put in :- ");
  scanf("%c", &putin);

  while (name[i] != '\0')
  {
    if (name[i] == ch)
    {
      name[i] = putin;
    }

    i++;
  }

  printf("your string is %s", name);

  return 0;
}
