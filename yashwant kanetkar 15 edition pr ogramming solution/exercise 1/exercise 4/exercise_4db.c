#include <stdio.h>

int main()
{
  char c;
  int a;

  printf("enter any character :- ");
  scanf("%c", &c);

  a = c;

  if (a > 64 && a < 91)
  {
    printf("yoy enter capital alphabet character");
  }

  else if (a > 96 && a < 123)
  {
    printf("you enter small alphabet character");
  }

  else if (a > 47 && a < 58)
  {
    printf("you enter a digit");
  }

  else if (a >= 0 && a < 48)
  {
    printf("you enter a special symbol");
  }

  else if (a > 57 && a < 65)
  {
    printf("you enter a special symbol");
  }

  else if (a > 90 && a < 97)
  {
    printf("you enter a special symbol");
  }

  else if (a > 122 && a < 128)
  {
    printf("you enter a special symbol");
  }

  else
  {
    printf("invalid input");
  }

  return 0;
}
