#include <stdio.h>

int main()
{
  FILE *fp;
  char ch;

  fp = fopen("myfile.txt", "r");

  if (fp == NULL)
      printf("file is empty");

  ch = fgetc(fp);
  while ((ch) != EOF)
  {
    printf("%c", ch);
    ch = fgetc(fp);
  }

  return 0;
}
