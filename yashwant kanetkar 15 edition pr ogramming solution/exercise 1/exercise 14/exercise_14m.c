#include <stdio.h>
#include <math.h>

int main()
{
  int data[15] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2}, i, n = 15;
  float std[15], mean = 0;

  // print data items
  for (i = 0; i <= 14; i++)
  {
    printf("%d\t", data[i]);
  }

  // calculating mean for given data
  for (i = 0; i <= 14; i++)
  {
    mean = mean + data[0];
  }

  mean = mean / n;

  // calculate standard deviation
  for (i = 0; i <=14; i++)
  {
    std[i] = sqrt(pow((data[i] - mean), 2)) / n;
  }

  // print result
  printf("\n\nmean = %f\n\n", mean);
  for (i = 0; i <= 14; i++)
  {
    printf("standard deviation of %d = %f\n", data[i], std[i]);
  }
  return 0;
}
