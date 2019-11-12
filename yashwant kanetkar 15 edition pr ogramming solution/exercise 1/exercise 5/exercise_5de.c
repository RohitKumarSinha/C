#include <stdio.h>

int main()
{
  int num, temp, res, res1, res2;

  printf("enter a integer number");
  scanf("%d" ,&num);

  res2 = 0;
  temp = num;

  while (num != 0)
  {
    res = num % 10;
    res1 = (res * res * res);
    res2 = res2 + res1;
    num = num / 10;
  }

  if (temp == )

  return 0;
}
