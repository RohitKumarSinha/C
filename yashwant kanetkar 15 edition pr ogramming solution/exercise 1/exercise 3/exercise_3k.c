#include <stdio.h>
#include <math.h>

int main()
{
  int x, y, r, x1, y1, p;

  printf("enter the center of the circle x and y :- \n");
  scanf("%d %d", &x, &y);

  printf("enter the radius of circle :- \n");
  scanf("%d", &r);

  printf("enter the points x1 and y1 :- \n");
  scanf("%d %d", &x1, &y1);

  p = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));

  if (p > r)
  {
    printf("point lies out side of the circle = %d", p);
  }

  else if (p < r)
  {
    printf("point lie inside the circle = %d", p);
  }

  else
  {
    printf("point lies on the circle");
  }

  return 0;
}
