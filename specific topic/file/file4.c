#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp, *fpp;
  int line, count = 1;
  char ch, c[20];

  fp = fopen("myfile1.txt", "r");
  fpp = fopen("myfile.txt", "w");

  if (fp == NULL)
  {
     printf("file is empty");
     exit(1);
   }

   printf("enter which line you want to replace :- ");
   scanf("%d", &line);

   ch = fgetc(fp);

   while (ch != EOF)
   {
        if (ch == '\n')
          count++;

        if (count != line)
           putc(ch, fpp);

        if (line == count)
           fputs("replacing this line\n", fpp);

       ch = fgetc(fp);
   }

   fclose(fp);
   fclose(fpp);

   return 0;
}
