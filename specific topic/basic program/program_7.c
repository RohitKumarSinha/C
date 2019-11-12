// lcm of two number
#include <stdio.h>
int main()
{
  int a, b, i;

  printf("enter two number for lcm :- ");
  scanf("%d %d", &a, &b);

  for (i = a > b ? a : b; i <= a * b; i++)
  {
    if (i % a == 0 && i % b == 0)
              break;
  }

  printf("LCM = %d", i);
  return 0;
}
