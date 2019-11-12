#include <stdio.h>

int main()
{
  int salary;
  float da, hr, gs;

  printf("Enter the basic salary of ramesh in integer form :-");
  scanf("%d", &salary );

  da = (salary / 100) * 40;
  printf("\ndearness allowance of your basic salary is :- %f rupees", da);

  hr = (salary / 100) * 20;
  printf("\nhouse rent allowance of your basic salary is :- %f rupees", hr);

  gs = salary + da + hr;
  printf("\nAdding your basic salary, dearness allowance and house rent allowance your gross salary become : %f rupees", gs);
  return 0;
}
