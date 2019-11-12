// lcm of one number

#include <stdio.h>

int main()
{
  int num, i, mul = 1;

  printf("enter a number :- ");
  scanf("%d", &num);

  for (i = 2; num != 1; i++)
  {
    if (num % i == 0)
    {
      mul = mul * i;
      num = num / i;
      i = 1;
    }
  }

  printf("\nLCM = %d", mul);
  return 0;
}
