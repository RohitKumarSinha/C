/* write a program to prepare a grocery bill. Enter the name of the items purchased, quantity in which
it is purchased, and its price per unit. Then display the bill in following format */

#include <stdio.h>

int main()
{
  char item[] = "masala";
  int price = 1, quantity = 500, amount;

  amount = quantity * price;

  printf("\n\n");
  printf("************B I L L************\n");
  printf("Item   Quantity   Price   Amount\n");
  printf("--------------------------------\n");
  printf("%s     %d      %d    %d  \n", item, quantity, price, amount);
  printf("--------------------------------\n");
  printf("Total amout to be paid  %d\n", amount);
  printf("--------------------------\n");

  return 0;

}
