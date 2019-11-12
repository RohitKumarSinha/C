#include <stdio.h>

int main()
{
  int a;
  char b;

  printf("enter a character :-");
  scanf ("%c", &b);

  a = b;

  ((a >= 97 && a <= 122) ? printf("this is smaller case alphabet\n") : printf("this is not smaller case alphabet\n"));
  (((a >= 0 && a <= 47) || (a >= 58 && a <= 64) || (a >= 91 && a <= 96) || (a >= 123 && a <= 127)) ? printf("this is special symbol") : printf("this is not special symbol"));

  return 0;
}
