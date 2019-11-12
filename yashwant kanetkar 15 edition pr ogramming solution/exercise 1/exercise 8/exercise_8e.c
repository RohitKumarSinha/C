#include <stdio.h>
void prime_factor(int);
int main()
{
  int num;

  printf("enter a number :- ");
  scanf("%d", &num);

  prime_factor(num);

  return 0;
}

void prime_factor(int num)
{
  printf("here are your prime factors\n");

  while (num != 1)
  {
    if (num % 2 == 0)
    {
      printf("2\n");
      num = num / 2;
    }

    else if (num % 3 == 0)
    {
      printf("3\n");
      num = num / 3;
    }

    else if (num % 5 == 0)
    {
      printf("5\n");
      num = num / 5;

    }

    else if (num % 7 == 0)
    {
      printf("7\n");
      num = num / 7;
    }

    else if (num % num == 0)
    {
      printf("%d", num);
      num = num / num;
    }

    else
        printf("invalid input");
  }
}
