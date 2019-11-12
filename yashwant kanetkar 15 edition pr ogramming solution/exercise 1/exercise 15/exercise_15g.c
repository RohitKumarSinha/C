#include <stdio.h>

int main()
{
  int n[16], none[8], ntwo[8], i, sum = 0, add = 0, total, j;

  printf("enter 16 digit of your credit card:- \n");

  for (i = 0; i <= 15; i++)
  scanf("%d", &n[i]);

  for (i = 0, j = 0; i <= 15; i += 2, j++)
    none[j] = n[i] * 2;

  for (i = 1, j = 0; i <= 15; i += 2, j++)
    ntwo[j] = n[i];

  for (i = 0; i <= 7; i++)
  {
    if (none[i] >= 10)
      none[i] = none[i] - 9;

    sum = sum + none[i];

  }

  for (i = 0; i <= 7; i++)
    add = add + ntwo[i];

  total = sum + add;

  if (total % 10 == 0)
    printf("valid credit card");

  else
    printf("not valid credit card");

  return 0;
}
