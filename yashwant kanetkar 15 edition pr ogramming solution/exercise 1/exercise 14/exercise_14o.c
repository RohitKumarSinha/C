#include <stdio.h>
#include <math.h>

int main()
{
  int n = 11, i, j;
  float x[11] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
  float y[11] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
  float r;
  float sx = 0.0, sxy = 0.0, sy = 0.0, sxs = 0.0, sys = 0.0;
  float r1, r2;

  for (i = 0; i <= 10; i++)
  {
    sx = sx + x[i]; // summation of x
    sxy = sxy + x[i] + y[i]; // summation of x and y
    sy = sy + y[i]; // summation of y
    sxs = sxs + x[i] * x[i]; // summation of square of x
    sys = sys + y[i] * y[i]; // summation of square of y
  }

  printf("\n%cX = %2f\n", 228, sx); // here %c = 228 = sigma character
  printf("\n%cY = %2f\n", 228, sy);
  printf("\n%cXY = %2f\n", 228, sxy);
  printf("\n%cX*X = %2f\n", 228, sxs);
  printf("\n%cY*Y = %2f\n", 228, sys);

  r1 = (sxy - sx * sy);
  r = r1 / r2;

  printf("\n(numerator) r1 = %f\n", r1);
  printf("\n(denominator) r2 = %f\n", r2);
  printf("\n corelation cofficient r1 / r2 = %f",r);
  return 0;
}
