#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp;
  int line = 0;
  char ch;

  fp = fopen("myfile1.txt", "r");

  if (fp == NULL)
  {
    printf("file is empty ");
    exit(1);
  }

  ch = fgetc(fp);

  while (ch != EOF)
  {
    if (ch == '\n')
       line++;

    ch = fgetc(fp);
  }

  printf("total no of line in your file is %d", line);

  fclose(fp);

  return 0;
}
