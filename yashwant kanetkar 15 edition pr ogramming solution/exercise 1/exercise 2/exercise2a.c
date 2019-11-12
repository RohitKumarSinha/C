#include <stdio.h>

int main()
{
  int num, a, i, result;

  printf("enter the integer number of five-digit :- ");
  scanf("%d", &num);

  a = 0;

  while (num != 0)
  {
    result = num % 10;
    printf("\nlast digit of your number is = %d" ,result);
    a += result;
    printf("\nadding the last number = %d", a);
    num = num / 10;
    printf("\nnow your number is = %d\n", num);
  }

  printf("\n\naddition of your number is %d", a);

  return 0;
}
