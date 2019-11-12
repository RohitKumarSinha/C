#include <stdio.h>

int main()
{
  float a, b, c;

  printf("enter the value of a, b and c :- ");
  scanf("%f %f %f", &a, &b, &c);

  (((a > b) && (a > c)) ? printf("a is greater than all of three") : (b > c) ? printf("b is greater than all of three") : printf("c is greater than all of three"));

  return 0;
}
