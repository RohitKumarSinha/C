#include <stdio.h>

int main()
{

  int p1, p2, p3;

  printf("enter the age of ram shyam and ajay :- \n");
  scanf("%d %d %d",&p1, &p2, &p3);

  if ((p1 < p2) && (p1 < p3))
  {
    printf("ram is youngest");
  }

  else if ((p2 < p1) && (p2 < p3))
  {
    printf("shyam is youngest");
  }

  else if ((p3 < p1) && (p3 < p2))
  {
    printf("ajay is youngest");
  }
  else
  {
    printf("invalid input");
  }
  return 0;
}
