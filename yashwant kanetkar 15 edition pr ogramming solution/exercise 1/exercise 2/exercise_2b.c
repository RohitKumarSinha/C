#include <stdio.h>

int main()
{
  int num, rev, result;
  printf("enter the integer number :-");
  scanf("%d", &num);

  while (num != 0)
  {
    result = num % 10; // iterating the last digit of the num
    printf("%d",result); // printing the last digit of the num

    num = num/10; // removing the last digit of the num

  }
  return 0;
}
