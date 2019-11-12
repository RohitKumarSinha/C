#include <stdio.h>
#include <math.h>

int main()
{
  int n = 10, i;
  float x[10] = {3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0};
  float y[10] = {1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0};
  float a, b;
  float sx = 0.0, sxy = 0.0, sy = 0.0, sxs = 0.0;
  float r1, r2, mx = 0.0, my = 0.0, yy;

  for (i = 0; i <= 9; i++)
  {
    sx = sx + x[i]; // summation of x
    sxy = sxy + x[i] + y[i]; // summation of x and y
    sy = sy + y[i]; // summation of y
    sxs = sxs + x[i] * x[i]; // summation of square of x
  }

  printf("\n%cX = %2f\n", 228, sx); // here %c = 228 = sigma character
  printf("\n%cY = %2f\n", 228, sy);
  printf("\n%cXY = %2f\n", 228, sxy);
  printf("\n%cX*X = %2f\n", 228, sxs);

  r1 = (n * sxy - sx * sy);
  r2 = (n * sxs) - (sx * sx);
  b = r1 / r2;

  printf("\nvalue of r1 = %f\n", r1);
  printf("\nr2 = %f\n", r2);
  printf("\nvalue of b = %f\n", b);

  mx = sx / n; // mean of x
  my = sy / n; // mean of y

  a = my - b * mx;

  printf("\nvalue of a is %f\n", a);
  printf("\nequation of the line is : y = %2f * X % + .2f", b, a);

  return 0;
}
