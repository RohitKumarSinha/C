#include <stdio.h>

int main()
{
  float rad, len, bre, aoc, aor, peri, circum, pie;

  pie = 3.14;

  printf("Enter the radius of the circle :-");
  scanf("%f", &rad);

  aoc = 2 * pie * rad;
  printf("area of circle is %f", aoc);

  circum = pie * (rad * rad);
  printf("\ncircumference of circle is %f", circum);

  printf("\nEnter the length of the rectangle :-");
  scanf("%f", &len);

  printf("Enter the breadth of the rectangle :-");
  scanf("%f", &bre);

  aor = len * bre;
  printf("\narea of rectangle is %f", aor);

  peri = 2 * (len + bre);
  printf("\nperimeter of rectangle is %f", peri);


  return 0;
}
