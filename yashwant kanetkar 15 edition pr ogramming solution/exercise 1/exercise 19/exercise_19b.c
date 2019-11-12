#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 int main()
 {
   FILE *f1, *f2;
   char ch, buffer[20];

   f1 = fopen("language.txt", "a");

   if (f1 == NULL)
   {
     printf("file is empty");
     exit(1);
   }

   f2 = fopen("another.txt", "r");

   if (f2 == NULL)
   {
      printf("file is empty");
      exit(2);
   }

      fseek(f1, 0, SEEK_END); // goes to last character
      ch = fgetc(f2);

       while (ch != EOF)
       {
         fputc(ch, f1);
         ch = fgetc(f2);
       }

       rewind(f1);
       while(fgets(buffer, 9, f1) != NULL) // displaying the contents
         printf("%s", buffer);

    fclose(f1);
    fclose(f2);
    return 0;
 }
