#include <stdio.h>
#include <windows.h>

int main()
{
  int a, b;
  int *x, *y, *z;

  printf("enter two numbers :\n");
  scanf("%d %d", &a, &b);

  printf("Before swapping your number a = %d and b = %d", a, b);

  x = &a;
  y = &b;

  z = *x;
  *x = *y;
  *y = z;

  getch();
  system("cls");
  printf("after swappig your number is a = %d and b = %d", a, b);

  return 0;
}
