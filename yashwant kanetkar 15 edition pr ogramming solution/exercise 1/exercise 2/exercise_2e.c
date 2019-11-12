#include <stdio.h>
#include <math.h>

int main()
{
  int l1, l2, g1, g2;
  float d;

  printf("enter the latitude of two places in the earth in degree :- \n");
  scanf("%d %d", &l1, &l2);

  printf("enter the longitude of two two in earth in degree  :- \n");
  scanf("%d %d" , &g1, &g2);

  d = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));
  printf("distance between nautical miles is %f", d);
  return 0;
}
