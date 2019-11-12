#include <stdio.h>

int main()
{
  float s1, s2, s3;

  printf("enter the three sides of the triangle :- \n");
  scanf("%f %f %f", &s1, &s2, &s3);

  if (((s1 + s2 ) < s3) || ((s2 + s3 ) < s1) || ((s3 + s1 ) < s2))
  {
    printf("this triangle is valid");
  }

  else
  {
    printf("this triangle is not valid");
  }

  return 0;
}
