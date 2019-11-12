#include <string.h>
#include <stdio.h>

int main()
{
  char ch[20];
  char *c;

  c = &ch;
  printf("enter a string :- ");
  scanf("%s", c);

  printf("your reverse string is %s", strrev(c));
  return 0;
}
