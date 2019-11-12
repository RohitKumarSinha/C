#include <stdio.h>
#include <math.h>

int area(int, int, int);
int main()
{
  int a, b, c;
  float s;
  printf("enter the value of three sides of triangle :- \n");
  scanf("%d %d %d", &a, &b, &c);

  s = area(a, b, c);
  printf("the area of the triangle is %f", s);

  return 0;
}

int area(int s1, int s2, int s3)
{
  float s, are;

  s = (s1 + s2 + s3) / 2;
  are = sqrt(s * ((s - s1) * (s - s2) * (s - s3)));

  return are;
}
