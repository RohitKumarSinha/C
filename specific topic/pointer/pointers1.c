#include <stdio.h>
#include <windows.h>

void sum (int *, int *);

int main()
{
  int a, b;
  int *x, *y;

  printf("enter two numbers :- ");
  scanf("%d %d", &a, &b);

  x = &a;
  y = &b;

  printf("sum of %d and %d is %d .", *x, *y, *x + *y);

  return 0;
}

// *x == a
// *y == b
// if you write only x not *x then x contain the address of a so you can't get your desire result
