#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int main()
{
  FILE *fp, *fpp;
  char ch;
  long cnt; // to store largest number

  fp = fopen("myfile.txt", "r");
  fpp = fopen("myfile1.txt", "w");

  if (fp == NULL)
  {
    printf("file is empty");
    exit(1);
  }

  ch = fgetc(fp);
  fseek(fp, -1L, 2); //makes the pointer fp to point at the last character of the file

  while (ch != EOF)
  {
    fputc(ch, fpp);
    fseek(fp, -2L, 1); //shifts the pointer to the previous character
    ch = fgetc(fp);
  }
  printf("\n\nfile copied successfully in reverse oreder\n\n");

  fclose(fp);
  fclose(fpp);

  return 0;
}
