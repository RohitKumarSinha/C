// write a program to calculate simply interest and compound interest

#include <stdio.h>

int main()
{
  int p, r, t;
  float si, ci;

  printf("Enter the principal rate and time of your simple interest : \n");
  scanf("%d %d %d", &p, &r, &t);

  si = (p * r * t) / 100;

  printf("your simple interest is %.2f", si);

  printf("\n\nEnter the principal rate and time of your compound interest :\n");
  scanf("%d %d %d", &p, &r, &t);

  ci = (p * r * t);

  printf("your compound interest is %.2f", ci);

  return 0;
}
