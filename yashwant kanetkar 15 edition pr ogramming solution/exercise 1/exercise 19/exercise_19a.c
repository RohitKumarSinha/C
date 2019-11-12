#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp;
  int i = 1;
  char ch;

  fp = fopen("language.txt", "r+"); // open the file language.txt in read and write method

  if (fp == NULL) // checking the file is empty or not
  {
    printf("file is empty :");
    exit(1);
  }

  printf("%d.  ", i);
  i++;

  do {
    ch = fgetc(fp); // iterate the single character  one by one in our file language.txt
    if (ch == '.')
    {
      printf("%c", ch);
      if (fgetc(fp) == EOF) // if file is empty then file is empty
          continue;

      printf("\n%d.  ",i);
      i++;

      continue;
    }
    printf("%c", ch);
  } while(ch != EOF);
  fclose(fp);

  return 0;
}
