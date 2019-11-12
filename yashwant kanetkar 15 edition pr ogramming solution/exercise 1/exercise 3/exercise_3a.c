#include <stdio.h>

int main()
{
  float cp, sp, profit, loss;

  printf("enter the cost price and selling price of the item :- \n");
  scanf("%f %f", &cp, &sp);

  if (cp < sp)
  {
    profit = sp - cp;
    printf("you are in profit and your profit is %f rupees. ", profit);
  }

  else if (cp > sp)
  {
    loss = cp - sp;
    printf("you are in loss and your loss is %f rupees. ", loss);
  }

  else if (cp == sp)
  {
    printf("you are neither in profit nor in loss .");
  }

  else
  {
    printf("invalid input");
  }
  return 0;
}
