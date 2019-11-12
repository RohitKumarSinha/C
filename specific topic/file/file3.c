#include <stdio.h>

int main()
{
  FILE *fp, *fpp;
  char ch;
  int line, count = 1;

  fp = fopen("myfile.txt", "r");
  fpp = fopen("myfile1.txt", "w");

  if (fp == NULL)
      printf("file is empty");

   printf("enter the line no which you want to delete in text :- ");
   scanf("%d", &line);

   ch = fgetc(fp);
   while (ch != EOF)
   {

      if (ch == '\n')
          count++;

          if (count != line)
          {
            putc(ch, fpp);
          }

        ch = fgetc(fp);
   }

   fclose(fp);
   fclose(fpp);

   remove("myfile.txt");
   rename("myfile.txt", "myfile1.txt");
   return 0;
}
