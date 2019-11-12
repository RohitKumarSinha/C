#include <stdio.h>

int main()
{
  int x1, y1, x2, y2, x3, y3, slope1, slope2;

  printf("enter the first coordinates x1 and y1 :- \n");
  scanf("%d %d", &x1, &y1);

  printf("enter the second coordinates x2 and y2 :- \n");
  scanf("%d %d", &x2, &y2);

  printf("enter the third coordinates x3 and y3 :- \n");
  scanf(" %d %d", &x3, &y3);

  slope1 = ((y2 - y1) / (x2 - x1));
  slope2 = ((y3 - y2) / (x3 - x2));

  if (slope1 == slope2)
  {
    printf("three points fall on the same line");
  }

  else
  {
    printf("three points doesn't on the same line");
  }
  return 0;
}
