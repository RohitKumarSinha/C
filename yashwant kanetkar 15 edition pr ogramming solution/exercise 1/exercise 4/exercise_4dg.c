#include <stdio.h>
#include <math.h>

int main()
{
  float r, g, b, white = 0, cyan, mag, yell, black;

  printf("enter the value of red green and blue from 1 to 255 :- \n");
  scanf("%f %f %f", &r, &g, &b);

  // r is replaced by r/255 and so on

  r /= 255;
  g /= 255;
  b /= 255;

  // finding maximum ratio

  if (white < r)
     {
       white = r;
     }

  else if (white < g)
  {
    white = g;
  }

  else if (white < b)
  {
    white = b;
  }

  cyan = (white - r) / white;
  mag = (white - g) / white;
  yell = (white - b) / white;
  black = 1 - white;

  printf("cyan = %f\nmagenta = %f\nyellow = %f\nBlack = %f", cyan, mag, yell, black);

  return 0;
}
