#include <stdio.h>
#include <string.h>

int main()
{
  char ch1[20], ch2[20];
  char *c1, *c2;
  int i;

  c1 = &ch1[0];
  printf("enter the string :- ");
  scanf("%s", c1);

   c2 = &ch2[0];

   strcpy(c2, c1);

    for (i = 0; (c1 + i) != '\0'; i++)
   printf("string1 = %s and string2 = %s", *(c1 + i), *(c2 + i));

  return 0;
}
