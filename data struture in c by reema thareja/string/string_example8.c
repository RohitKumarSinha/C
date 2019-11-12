// write a program to delete a substring from a text

#include <stdio.h>

int main()
{

  char str[100], del_str[100], copy_str[80];
  int i = 0, j = 0, k = 0;

  printf("Enter a text :- ");
  gets(str);

  printf("enter a deleted string :- ");
  gets(del_str);

  while (str[i] != '\0')
  {
    while (str[i] == del_str[j] && del_str[j] != '\0')
    {
      i++;
      j++;
    }

    copy_str[k] = str[i];
    i++;
    k++;
  }

   copy_str[k] = '\0';
   
  printf("your deleted string is  %s.", copy_str);

  return 0;
}
