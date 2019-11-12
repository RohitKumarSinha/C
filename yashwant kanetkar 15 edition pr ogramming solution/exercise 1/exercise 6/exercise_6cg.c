#include <stdio.h>

int main()
{
  float i, x = 5.5;
  int y = 1;

    for (x ; x <= 12.5; x += 0.5)
    {
        if (y > 6)
      {

        y = 1;

      }

    i = 2 + (y + (0.5 * x));
    printf("intellengence of a person is %f here x is = %f and y is %d\n", i , x, y);
    y += 1;
  }
  return 0;
}
