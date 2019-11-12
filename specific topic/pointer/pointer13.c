#include <stdio.h>
#include <string.h>

int main()
{
  char ch1[20], ch2[20];
  char *c1, *c2;
  int res;

  c1 = ch1;
  printf("enter first string :- ");
  scanf("%s", c1);

  c2 = ch2;
  printf("enter another string :- ");
  scanf("%s", c2);

  res = strcmp(c1, c2);

  if (res)
     printf("\nboth string are not equal");

   else
      printf("\nboth string are equal");

  return 0;
}
