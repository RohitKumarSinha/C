// write a program to insert a string in main text

#include <stdio.h>
#include <string.h>

int main()
{

  char str[100], ins_str[100], new_str[100];
  int pos, i = 0, j = 0, k = 0, len_str, len_ins_str, total;

  printf("enter a string :- ");
  gets(str);

  printf("enter the inserted string :- ");
  gets(ins_ `str);

  printf("enter in which position you insert the string :- ");
  scanf("%d", &pos);

  while (str[i] != '\0')
  {
    if (pos == i)
    {
      while (ins_str[j] != '\0')
      {
        new_str[k] = ins_str[j];
        k++;
        j++;
      }
    }

    else
    {
      new_str[k] = str[i];
      k++;
    }

    i++;
  }

  new_str[k] = '\0';

  printf("your new string is  %s:- ", new_str);

  return 0;
}
