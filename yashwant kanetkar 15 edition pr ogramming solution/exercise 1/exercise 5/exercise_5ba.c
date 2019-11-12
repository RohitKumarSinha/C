#include <stdio.h>

int main()
{
  int hours, i, res, rate, total;

  
  i = 1;
  while (i <= 10)
  {
    printf("\nhow much hour employee work in a week :- ");
    scanf("%f", &hours);

    if (hours > 40)
    {
       res = hours - 40;
       rate = (res * 12);
       total = (res * 12) + 5000;
       printf("the company paid you 5000 rupees for normal hours\n");
       printf("the company paid you %f rupees for % f hours\n.", rate, res);
       printf("total amount company paid you is %f", total);
    }

    else
    {
      rate = 5000;
      printf("the company paid you 5000 rupees for normal hours");
    }
  }
  return 0;
}
