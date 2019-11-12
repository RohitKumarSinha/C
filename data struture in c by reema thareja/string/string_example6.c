// write a program to extact substring from the middle of given program

#include <stdio.h>

int main()
{
  char str[100];
  int pos, upto;

  printf("Enter a string :- ");
  gets(str);

  printf("Enter the postion from you extract a string :- ");
  scanf("%d", &pos);

  printf("Enter the postion upto extract a string :- ");
  scanf("%d", &upto);

  while (pos <= upto)
  {
    printf("%c", str[pos]);
    pos++;
  }

  return 0;
}
