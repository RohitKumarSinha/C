// program to count digits in a number

#include <stdio.h>

int main()
{
  int num, count = 1;

  // input the number
  printf("enter the number :- ");
  scanf("%d", &num);

  while (num > 9)
  {
     count += 1;
     num = num / 10;

  }

  printf("your number have %d digits .", count);
  return 0;
}
