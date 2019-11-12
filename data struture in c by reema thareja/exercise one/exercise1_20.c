// write a program to display sum and average of numbers from 1 to n. use for loop

#include <stdio.h>

int main()
{
  int num, sum = 0, avg;

  printf("Enter the nth term :- ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)
       sum = sum + i;

  avg = sum / num;
  printf("sum = %d average = %d", sum , avg);

  return 0;
}
