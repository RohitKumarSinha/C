// c program to convert upper case content of the file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *fp, *fpp;
  char ch;

  fp = fopen("myfile1.txt", "r");
  fpp = fopen("myfile.txt", "w");
  if (fp == NULL)
  {
    printf("file cannot be open");
    exit(1);
  }

  ch = fgetc(fp);
  while (ch != EOF)
  {
    strupr(ch);
    fputc(ch, fpp);
    ch = fgetc(fp);
  }

  fclose(fp);
  fclose(fpp);

  return 0;
}
