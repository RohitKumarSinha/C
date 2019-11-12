#include <stdio.h>
#include <math.h>

int main()
{

  float x[10], y[10], dis = 0;
  int i, j;

  printf("enter the x and y coordinates of 10 points :-\n");

  for (i = 0; i  < 10; i++)
       scanf("%f %f", &x[i], &y[i]);

  for (i = 0; i < 10; i++)
       dis = dis + sqrt(pow((x[i + 1] - x[i]), 2) + pow((y[i + 1] - y[i]), 2));

  printf("the total distance between first and last point is %f", dis);
  return 0;
}
