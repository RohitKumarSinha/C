// write a program to print 'programming in c is Fun' using pointers

#include <stdio.h>
#include <string.h>

int main()
{
  char text[] = "programming in c is Fun";
  char *text_ptr = &text[0];

  for (int i = 0; i < strlen(text); i++)
      printf("%c", *(text_ptr + i));

    return 0;
}
