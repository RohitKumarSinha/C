// write a program to sort the names

#include <stdio.h>
#include <string.h>

int main()
{
  char names[5][20], temp[20];

  printf("enter the names of five person in maximum 20 letter :\n");
  for (int i = 0; i < 5; i++)
  gets(names[i]);

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 4; j++)
     {
       if (strcmp(names[j], names[j + 1]) > 0)
       {
         strcpy(temp, names[j]);
         strcpy(names[j], names[j + 1]);
         strcpy(names[j + 1], temp);
       }
     }
  }

  printf("names in aphabetical order are :- \n");
  for (int i = 0; i < 5; i++)
  printf("%s\n", names[i]);

  return 0;
}
