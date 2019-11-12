#include <stdio.h>

int main()
{
  float s1, s2, s3;

  printf("enter the three sides of the triangle :- \n");
  scanf("%f %f %f", &s1, &s2, &s3);

  if ((s1 == s2) && (s2 == s3) && (s1 == s3) && (s1 + s2 + s3 == 180))
  {
    printf("this triangle is equilateral");
  }

  else if (((s1 == s2) || (s2 == s3) || (s1 == s3)) && (s1 + s2 + s3 == 180))
  {
    printf("this triangle is isosceles");
  }

  else if (((s1 == 90) || (s2 == 90) || (s3 == 90)) && (s1 + s2 + s3 == 180))
  {
    printf("this is right angle triangle");
  }

  else if (!(s1 == s2) && !(s2 == s3) && !(s1 == s3) && (s1 + s2 + s3 == 180))
  {
    printf("this triangle is scalene");
  }

  else
  {
    printf("invalid input");
  }
  return 0;
}
