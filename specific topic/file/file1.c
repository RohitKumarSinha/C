#include <stdio.h>
#include <string.h>

int main()
{
  FILE *fp;
  char ch[] = {"i am storing some information in it"};
  int i;

  fp = fopen("myfile.txt", "w");

  for (i = 0; i < strlen(ch); i++)
  {
    fputc(ch[i], fp);
  }

  fclose(fp);

  return 0;
}
