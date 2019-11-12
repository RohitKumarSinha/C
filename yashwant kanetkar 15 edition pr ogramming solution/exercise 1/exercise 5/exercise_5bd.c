#include <stdio.h>

int main()
{
  int i;
  char c;

  i = 0;
  printf("ASCII values  ASCII character\n");
  while (i < 255)
  {
    c = i;

  printf("    %c               %d\n", i, c);
    i += 1;
  }
  return 0;
}
