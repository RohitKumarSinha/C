// program that print all odd numbers and even number seperatly

#include <stdio.h>
int main()
{
  int num, i, add = 0, sum = 0;

  printf("enter a number :- ");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      sum = sum + i;
    }

    else
    {
      add = add + i;
    }
  }


  printf("\nadding all even number up to your number is %d ", sum);
  printf("\nadding all odd number up to your number is %d", add);

  return 0;
}
