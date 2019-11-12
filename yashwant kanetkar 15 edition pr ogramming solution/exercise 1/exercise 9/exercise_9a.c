#include <stdio.h>
void sumavg(int, int, int, int, int, int *, float *);

int main()
{
  int num1, num2, num3, num4, num5, add;
  float per;

  printf("enter the five integer numbers to find out the sum and average :- \n");
  scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

  sumavg(num1, num2, num3, num4, num5, &add, &per);

  printf("sum of all numbers is %d\n", add);
  printf("average of total numbers is %f\n", per);
  return 0;
}

void sumavg(int n1, int n2, int n3, int n4, int n5, int *sum, float *avg)
{
  *sum = n1 + n2 + n3 + n4 + n5;
  *avg = ((n1 + n2 + n3 + n4 + n5) / 5);
}
