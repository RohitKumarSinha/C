#include <stdio.h>

int main()
{
  char ch[20];
  char *c;
  int i, len = 0;

  c = &ch[0];
  printf("enter a string :- ");
  scanf("%s", c);

  i = 0;
  while (*(c + i) != '\0')
  {
    len += 1;
    i += 1;
  }

  printf("length of your string is %d .", len);

  return 0;
}
a
