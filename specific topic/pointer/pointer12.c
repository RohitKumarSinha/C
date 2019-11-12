#include <stdio.h>
#include <string.h>

int main()
{
  char ch1[20], ch2[20];
  char *c1, *c2;

  c1 = &ch1[0];
  printf("enter one string :- ");
  scanf("%s", c1);

  c2 = &ch2[0];
  printf("enter another string :- ");
  scanf("%s", c2);

  printf("catenated string is %s", strcat(c1, c2));
  return 0;
}
