#include <stdio.h>

int main()
{
  char x[50] = {'a'}, z[50];
  char y[50];
  int i;

  for(i = 0; i <= 5; i++)
  {
   printf("%s\n", x); // printing x
   strcpy(z, x); //copying x into z
   strcpy(x, y); //copying y into x
   strcat(y, z); // adding (concatinatig) z in y

  }
  return 0;
}
