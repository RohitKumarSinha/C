#include <stdio.h>
int prime (int);
int main()
{
  int num, res;

  num = 25;
  res = prime(num);

  printf("adding the prime number till 25th term and result is %d", res);

  return 0;
}

int prime(int n)
{
  int sum;
  if (n == 1)
    return 1;

  else
   {
     n = n + prime(n - 1);
     return n;
   }

}
