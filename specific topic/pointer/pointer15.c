#include <stdio.h>

int main()
{
  int i, *x;
  float j, *y;
  char k, *z;

  x = &i;
  printf("enter a interger number:- ");
  scanf("%d", x);

  y = &j;
  printf("enter a real number :- ");
  scanf("%f", y);

  z = &k;
  printf("enter a character :- ");
  scanf("%s", z);

  printf("\n\naddress of interger number is %u and value is %d .", x, *x);
  printf("\naddress of interger number is %u and value is %f .", y, *y);
  printf("\naddress of interger number is %u and value is %c .", z, *z);

  return 0;
}
