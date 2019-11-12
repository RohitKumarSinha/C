#include <stdio.h>
#include <math.h>
#define CONDITION (i = 0; i <= 5; i++)

int main()
{
  float a[6] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
  float b[6] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
  float ang[6] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
  float area[6] , x;
  int i;

  // calculate the area of the triangle

  for CONDITION
  {
    area[i] = 0.5 * a[i];
  }

  for CONDITION
  {
    area[i] = area[i] * b[i];
  }

  for CONDITION
  {
    area[i] = area[i] * sin(ang[i]);
  }

// print the area of the triangle
  for CONDITION
  {
    printf("area of the triangle is %f\n\n", area[i]);
  }

// assign the value of 1st element of area in variable x
  x = area[0];

// checking the which element is greatest in area array
  for CONDITION
  {
    if (x < area[i])
      x = area[i];
  }

// print the result
    printf("the largesr area is %f", a);
  return 0;
}
