#include <stdio.h>

int main()
{
  int one, two, five, ten, fifty, hund, amount;

  printf("enter the amount of note one, two five, ten, fifty, and hundred :- \n");
  scanf("%d %d %d %d %d %d", &one, &two, &five, &ten, &fifty, &hund);

  if ((one < two) && (one < five) && (one < ten) && (one < fifty) && (one < hund))
  {
    amount = 1 * one;
    printf("total amount of one rupees note is %d", amount);
  }

  else if ((two < one) && (two < five) && (two < ten) && (two < fifty) && (two < hund))
  {
    amount = 2 * one;
    printf("total amount of two rupees note is %d", amount);
  }
  else if ((five < one) && (five < two) && (five < ten) && (five < fifty) && (five < hund))
  {
    amount = 5 * five;
    printf("total amount of five rupees note is %d", amount);
  }

  else if ((ten < one) && (ten < two) && (ten < five) && (ten < fifty) && (ten < hund))
  {
    amount = 10 * ten;
    printf("total amount of ten rupees note is %d", amount);
  }

  else if ((fifty < one) && (fifty < two) && (fifty < five) && (fifty < ten) && (fifty < hund))
  {
    amount = 50 * fifty;
    printf("total amount of fifty rupees note is %d", amount);
  }

  else if ((hund < two) && (hund < five) && (hund < ten) && (hund < fifty) && (one > hund))
  {
    amount = 100 * hund;
    printf("total amount of hundred rupees note is %d", amount);
  }

  else
  printf("invalid input");

  return 0;
}
