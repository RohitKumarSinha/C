#include <stdio.h>

int main()
{
  int num, temp, result, d, reverse = 0;

  printf("enter integer number :- ");
  scanf("%d" ,&num);

   temp = num; // store the num in temp because we are doing operation with num variable

  while (num != 0)
  {
    result = num % 10; // iterate the last value of the num
    printf("numbers = %d\n", result);

    reverse = reverse * 10 + result ; // multiply the reverse variable * 10 and adding result variable into it which is the last value of numbers num
    printf("reverse number = %d\n", reverse);
    num = num / 10; // removing the last digit of the num
  }

  if (temp == reverse)
  {
    printf("it is palindromo");
  }
  else
  {
  printf("it is not palindromo");
  }
  return 0;
}
