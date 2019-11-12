// program to read comment semicolon blank spaces, non blank spaces, comment, and count the no of lines

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp;
  char ch;
  int count = 0, semi = 0, blank = 0, nonblank = 0, comment = 0;

  fp = fopen("myfile.txt", "r");

  if (fp == NULL)
  {
    printf("file is empty");
    exit(1);
  }

  ch = fgetc(fp);
  while (ch != EOF)
  {
    if (ch == '\n')
        count++;

    else if (ch == ';')
        semi++;

    else if (ch == ' ')
       blank++;

    else if (ch == '/')
       comment++;

    else
       nonblank++;

    ch = fgetc(fp);
  }

  printf("\ntotal no of lines is %d\n", count);
  printf("total no of semicolon id %d\n", semi);
  printf("total no of blank spaces is %d\n", blank);
  printf("total no of non blank spaces is %d\n", nonblank);
  printf("total no of comment is %d", comment);

  return 0;
}
