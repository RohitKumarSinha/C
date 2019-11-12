#include <stdio.h>
void swap(int *, int *, int *);
int main()
{
  int x, y, z;

  x = 5;
  y = 8;
  z = 10;

  swap(&x, &y, &z);
  printf("y = %d z = %d x = %d", y, z, x);
  return 0;
}

void swap(int *a, int *b, int *c)
{
  int temp = *b;

  *b = *a;
  *a = *c;
  *c = temp;

}
