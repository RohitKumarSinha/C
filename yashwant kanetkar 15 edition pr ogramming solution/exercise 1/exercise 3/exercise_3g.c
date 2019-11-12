#include <stdio.h>

int main()
{

  float a1, a2, a3;

  printf("enter the three angles of triangle :- \n");
  scanf("%f %f %f", &a1, &a2, &a3);

  if ((a1 + a2 + a3 <= 180) && (a1 + a2 + a3 > 0))
  {
    printf("this triangle is valid");
  }

  else
  {
    printf("this triangle is not valid");
  }

  return 0;
}
