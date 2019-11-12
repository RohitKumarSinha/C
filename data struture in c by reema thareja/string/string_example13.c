// write a program to copy a string into another string

#include <stdio.h>

int main()
{
  char str[100], cpy_str[100];
  char *ptr_str, *ptr_cpy_str;


  printf("Enter the string :- ");
  gets(str);

  ptr_str = &str;
  ptr_cpy_str = &cpy_str;

  while (*ptr_str != '\0')
  {
    *ptr_cpy_str = *ptr_str;
    *ptr_cpy_str++;
    *ptr_str++;
  }

  ptr_cpy_str = &cpy_str;

  while (*ptr_cpy_str != '\0')
  {
    printf("%c", *ptr_cpy_str);
    *ptr_cpy_str++;
  }

  return 0;
}
