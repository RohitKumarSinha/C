// write a program to calculate area of a triangle using function

#include <stdio.h>
#include <math.h>

void area_of_tri(void);

int main()
{
  area_of_tri();
  return 0;
}

void area_of_tri(void)
{
  int s1, s2, s3;
  float s;
  float area;

  printf("Enter the three sides of the triangle : \n");
  scanf("%d %d %d", &s1, &s2, &s3);

  s = (s1 + s2 + s3) / 2;

  area = sqrt(s * (s - s1) * (s - s2) * (s - s3));

  printf("area of the triangle is %.2f", area);
}
