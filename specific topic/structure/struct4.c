#include <stdio.h>

int main()
{
  struct distance
  {
    int feet;
    float inch;
  };

  int res, res1;

  struct distance d1, d2;

  printf("enter the source distance in feet :- ");
  scanf("%d", &d1.feet);

  d1.inch = d1.feet * 12;

  printf("enter the destination distance in feet :- ");
  scanf("%d", &d2.feet);

  d2.inch = d2.feet * 12;

  res = d2.feet - d1.feet;
  res1 = d2.inch - d1.inch;

  printf("\n\ndistance between two distance in feet is %d .",res);
  printf("\ndistance between two distance in inch is %d .", res1);

  return 0;
}
