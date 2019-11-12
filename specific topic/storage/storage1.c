// automatic storage class
#include <stdio.h>
void add(int , int);

int main()
{
  auto int x; // always put storage class first then put data types
  auto int y;

  printf("enter two numbers :- ");
  scanf("%d %d", &x, &y);

  add(x, y);
  return 0;
}

void add(int a,int b) // don't put storage class auto in the function prototype
{
  auto int sum;
  sum = a + b;
  printf("sum of these two number %d .", sum);
}
