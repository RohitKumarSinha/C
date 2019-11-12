#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f1, *f2, *f3;
  char ch[20];

  f1 = fopen("language.txt", "r");
  f2 = fopen("another.txt", "r");
  f3 = fopen("third.txt", "w");

  if (f1 == NULL)
  {
    printf("language.txt is empty");
    exit(1);
  }

  if (f2 == NULL)
  {
    printf("another.txt is empty");
    exit(2);
  }

  while (fgets(ch, 19, f1) != NULL)
  {
    while (fgets(ch, 19, f2 )!= NULL)
    {
      fputs(ch, f3);
    }
    fputs(ch, f3);
  }
  return 0;
}
