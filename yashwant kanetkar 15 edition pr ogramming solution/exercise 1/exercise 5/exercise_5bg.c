#include <stdio.h>

int main()
{
  int times, num, n, posi, negi, zero;

  printf("how many numbers you want to enter :- ");
  scanf("%d", &times);

  n = 0;
  posi = 0;
  negi = 0;
  zero = 0;

  while (n < times)
  {
    printf("enter a number :-");
    scanf("%d", &num);

    if (num > 0)
    {
      posi += 1;
    }

    else if (num < 0)
    {
      negi += 1;
    }

    else if (num == 0)
    {
      zero += 1;
    }

    else
    {
      printf("invalid input");
    }

    n += 1;

  }

  printf("total positive number is %d\n", posi);
  printf("total negative number is %d\n", negi);
  printf("total zero number is %d\n", zero);
  return 0;
}
