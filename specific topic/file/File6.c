#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp, *fpp;
  char ch;

  fp = fopen("myfile.txt", "r");
  fpp = fopen("myfile1.txt", "a");

  if (fp == NULL)
  {
    printf("file is empty");
    exit(1);
  }

  ch = fgetc(fp);

  while (ch != EOF)
  {
    fputc(ch, fpp);
    ch = fgetc(fp);
  }

  fclose(fp);
  fclose(fpp);

  return 0;
}
