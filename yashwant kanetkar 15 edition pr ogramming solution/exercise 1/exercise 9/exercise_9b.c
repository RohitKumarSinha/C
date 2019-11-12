#include <stdio.h>
void sumavg(int, int, int, int *, float *);

int main()
{
  int num1, num2, num3, add;
  float per;

  printf("enter the three subject marks to find out the sum and average :- \n");
  scanf("%d %d %d", &num1, &num2, &num3);a

  sumavg(num1, num2, num3, &add, &per);

  printf("sum of all marks is %d\n", add);
  printf("percentage of total marks is %f\n", per);
  return 0;
}

void sumavg(int n1, int n2, int n3, int *sum, float *avg)
{
  *sum = n1 + n2 + n3;
  *avg = ((n1 + n2 + n3) / 3);
}
