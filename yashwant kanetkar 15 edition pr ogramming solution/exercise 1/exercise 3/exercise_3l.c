#include <stdio.h>

int main()
{
  float x, y;

  printf("enter the point x and y :- \n");
  scanf("%f %f", &x, &y);

  if (x == 0 && y==0)
  {
    printf("points lies on origin");
  }

  else if (y == 0)
  {
    printf("points lies on y axis ");
  }

  else if (x == 0)
  {
    printf("points lies on x axis");
  }

  else
  {
    printf("the point is neither lies between x and y axis");
  }
  return 0;
}
