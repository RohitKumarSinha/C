#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *f1, *f2;
  char str[20];

  f1 = fopen("language.txt", "r");

  if (f1 == NULL)
  {
    printf("this file is empty");
    exit(1);
  }

  f2 = fopen("another.txt", "w");

// fgets char get the sring from f1 and assing into string untill the f1 is empty here 19 say that at one time
// 19 character are assign
  while (fgets(str, 19, f1) != NULL)
  {
    strupr(str); // convet string into upper case
    fputs(str, f2); // those strings are assing into f2
  }
  return 0;
}
