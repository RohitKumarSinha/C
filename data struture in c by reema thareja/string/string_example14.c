// write a program to concatenate two strigs

#include <stdio.h>

int main()
{
  char str[100], cat_str[50];
  char *ptr_str, *ptr_cat_str;

  printf("enter the string :- ");
  gets(str);

  printf("enter the concatenate string :- ");
  gets(cat_str);

  *ptr_str = &str;
  *ptr_cat_str = &cat_str;

  while (*ptr_str != '\0')
  {
      *ptr_cat_str = *ptr_str
      *ptr_cat_str++;
      *ptr_str++;
  }

  *ptr_str = '\0';

  *ptr_str = &str;

  while (*ptr_str != '\0')
  {
    printf("%c", *ptr_str);
    *ptr_str++;
  }
}
