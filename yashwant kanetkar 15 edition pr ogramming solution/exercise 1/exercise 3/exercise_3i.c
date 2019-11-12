#include <stdio.h>

int main()
{
  float len, bre, area, peri;

  printf("enter the length and breadth of the triangle :- \n");
  scanf("%f %f", &len , &bre);

  area = len * bre;
  peri = 2 * (len + bre);

  if (area > peri)
  {
    printf("area of rectangle is greater than its perimeter\n");
    printf("area = %f perimeter = %f", area, peri);
  }

  else if (area < peri)
  {
    printf("area of rectangle is smaller than its perimeter\n");
    printf("area = %f perimeter = %f", area, peri);
  }

  else if (area == peri)
  {
    printf("area of rectangle is equal than its perimeter\n");
    printf("area = %f perimeter = %f", area, peri);
  }

  else
  {
    printf("invalid input");
  }
  return 0;
}
