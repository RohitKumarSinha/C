#include <stdio.h>
void factor (int);

int main()
{
  int num;

  printf("enter a positive integer number :- ");
  scanf("%d", &num);

  factor(num);

  return 0;
}

void factor(int n)
{
int i;

  for (i = 2; i <=n; i++)
  {
    if (n % i == 0)
    {
      printf("%d\n",i);
    }
     factor(n/i);
     break;

  }
}
