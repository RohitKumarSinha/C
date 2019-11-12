/* write a program to print the count of even numbers between 1 - 200. Also print their sum */

#include <stdio.h>

int main()
{
  int count = 0, sum = 0;

  for (int i = 2; i <= 200; i += 2)
  {
    count++;
    sum = sum + i;
  }

  printf("Total numbers of even numbers between 1 - 200 is :- %d\n", count);
  printf("sum of total even numbers between 1 - 200 is :- %d", sum);

  return 0;
}
