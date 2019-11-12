// write a program to calculate the distance between the given points (6, 3) and (2, 2)

#include <stdio.h>
#include <math.h>

typedef struct point1
{
  int p1 , p2;

}point1;

typedef struct point2
{
  int p1, p2;

}point2;

int main()
{
  float dis;
  point1 pp1;
  point2 pp2;

  pp1.p1 = 6;
  pp1.p2 = 3;

  pp2.p1 = 2;
  pp2.p2 = 2;

  dis = sqrt(pow(pp1.p1 + pp2.p2, 2) -  pow(pp1.p2 + pp2.p1, 2));

  printf("distance between two points is %.2f", dis);

  return 0;
}
