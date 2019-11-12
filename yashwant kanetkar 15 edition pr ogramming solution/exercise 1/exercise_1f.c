#include <stdio.h>

int main()
{
  float x = 1189, y = 841;

  float a[100];

  for(int i = 0; i <= 8; i++)
  {
    if (x > y)
    {
      printf("a[%d] = %f x %f & result = %f\n", i, x, y, x*y);
      x = x/2;
    }
    else
    {
      printf("a[%d] = %f x %f & result = %f\n\n", i, x, y, x*y);
      y = y/2;
    }
  }
  return 0;
}
