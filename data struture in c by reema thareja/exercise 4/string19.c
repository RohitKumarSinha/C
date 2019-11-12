// write a program to extract the string "od Mo" from the string "Good Morning"

#include <stdio.h>

int main()
{
  char message[] = "Good morning";
  int i;

  for (i = 2; i <= 6; i++)
  {
    printf("%c", message[i]);
  }

  return 0;
}
