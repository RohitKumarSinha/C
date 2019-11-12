#include <stdio.h>

float area(int, int, int, int, int, int);
void isinside(int, int, int, int, int, int, int, int, float *, float *, float *, float *);

int main()
{
  int x1, x2, y1, y2, x3, y3, x, y;
  float a, a1, a2, a3;
  printf("enter the coordinate value of x1 and y1 :- \n");
  scanf("%d %d", &x1, &y1);

  printf("enter the coordinate value of x2 and y2 :- \n");
  scanf("%d %d", &x2, &y2);

  printf("enter the coordinate value of x2 and y2 :- \n");
  scanf("%d %d", &x2, &y2);

  printf("enter the coordinate value of x and y :- \n");
  scanf("%d %d", &x, &y);

  isinside(x1, y1, x2, y2, x3, y3, x, y, &a, &a1, &a2, &a3);

  if (a == a1 + a2 + a3)
       printf("inside");

  else
      printf("not indside");
   return 0;
}

float area (int x1, int y1, int x2, int y2, int x3, int y3)
{
  return ((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2))/ 2.0);
}

void isinside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y, float *a, float *a1, float *a2, float *a3)
{

  *a = area(x1, y1, x2, y2, x3, y3);
  *a1 = area(x, y, x2, y2, x3, y3);
  *a2 = area(x1, y1, x, y, x3, y3);
  *a3 = area(x1, y1, x2, y2, x, y);
}
