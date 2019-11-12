/* write a program to read a short story. Rewrite the story by printing the line number before the
   starting of each line */


#include <stdio.h>

int main()
{
  char line1[50], line2[50], line3[50], line4[50], line5[50];

  printf("Enter the story of five lines \n");
  printf("Each line should contain less than 50 words\n");

  gets(line1);
  gets(line2);
  gets(line3);
  gets(line4);
  gets(line5);

  printf("1. %s\n2. %s\n3. %s\n4. %s\n5. %s", line1, line2, line3, line4, line5);

  return 0;
}
