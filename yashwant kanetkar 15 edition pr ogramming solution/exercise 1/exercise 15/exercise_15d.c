#include <stdio.h>

int main()
{
  char s[3] = {"123"};
  int i, num[3];

  printf("this is character :- ");

  for (i = 0; i <= 2; i++)
  {
     printf("%c", s[i]);
     num[i] = s[i] - '0'; // if you want to convert string into integer then minus '0' to every string because c guarantees
     // that the char value for the digits '0' to '9' are contiguos

  }

  printf("\nthis is integer :- ");

for (i = 0; i <= 2; i++)
     printf("%d", num[i]);

  return 0;
}
