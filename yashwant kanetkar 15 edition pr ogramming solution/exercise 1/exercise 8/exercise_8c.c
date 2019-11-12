#include <stdio.h>

int main()
{
  int num, res, c;

  printf("enter the year in integer form :- ");
  scanf("%d", &num);

  while (num != 0)

  {

  if (num % 1000 >= 0)
  {
    printf("M\n");
    num = num / 1000;
    printf("num = %d",num);
  }

  else if (num % 500 >= 0)
  {
    printf("D\n");
    num = num / 500;
  }

  else if (num % 100 >= 0)
  {
    res = num % 100;
    for(c = 0; c < res; c++)
    printf("C\n");
    num = num / 100;
  }

}
  return 0;
}
