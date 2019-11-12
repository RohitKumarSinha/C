#include <stdio.h>

int main()
{

  float s1, s2, s3, d, area;

  printf("enter the three sides of the triangle :- \n");
  scanf("%f %f %f", &s1, &s2, &s3);

  d = (s1 + s2 + s3) / 2;

  area = sqrt(d *(d-s1) *(d-s2) * (d-s3));

  printf("%f\n", area);

  return 0;
}
