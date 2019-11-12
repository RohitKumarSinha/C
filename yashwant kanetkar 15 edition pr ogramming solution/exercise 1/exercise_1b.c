#include <stdio.h>

int main()
{
  float km, cm, m, foot, inch;

  printf("Enter the two cities distance between in Km :- ");
  scanf("%f", &km);

  cm = km * 100000;
  printf("\nyour distance is %f in centimeter.", cm);

  m = km * 1000;
  printf("\nyour distance is %f in meter.", m);

  foot = km * 3280.84;
  printf("\nyour distance is %f in feet.", foot);

  inch = km * 39370.1;
  printf("\nyour distance is %f in inches.", inch);

  return 0;
}
