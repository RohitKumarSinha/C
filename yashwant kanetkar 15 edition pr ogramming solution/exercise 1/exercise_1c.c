#include <stdio.h>

int main()
{
  float m1, m2, m3, m4, m5, tm, per;

  printf("highest marks of your subject is 100\n");

  printf("Enter the marks of math :-");
  scanf("%f", &m1);

  printf("Enter the marks of physics :-");
  scanf("%f", &m2);

  printf("Enter the marks of chemistry :-");
  scanf("%f", &m3);

  printf("Enter the marks of english :-");
  scanf("%f", &m4);

  printf("Enter the marks of sanskrit :-");
  scanf("%f", &m5);

  tm = (m1 + m2 + m3 + m4 +m5);
  printf("\nyour total marks is %f .", tm);

  per = (tm / 5);
  printf("\nyour percentage of total marks is %f .", per);

  return 0;
}
