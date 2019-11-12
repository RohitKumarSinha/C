// write a program to calculate the area of a triangle using pointers

#include <stdio.h>
#include <math.h>
a
int main()
{
  int *s1, *s2, *s3;
  float sum, area1;
  float *s = &sum, *area = &area1;

  printf("Enter the three sides of the triangle : \n");
  scanf("%d %d %d", s1, s2, s3);

  sum = (*s1 +  *s2 + *s3) / 2;

  area1 = sqrt(*s * (*s - *s1) * (*s - *s2) * (*s - *s3));

  printf("The area of the triangle is %f", *area);
  return 0;
}
