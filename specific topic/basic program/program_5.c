// HCF (highest common factor) of two number
#include <stdio.h>

int main ()
{
  int a, b, res;

  printf("enter two number :- ");
  scanf("%d %d", &a, &b);


    for (res = a < b ? a : b; res >= 1; res--) // if a < b then the value of a assign into result otherwise
    // value of b assign into result ; checking that res is greater than 1 or not and decrement the value of res
      if ((a % res == 0) && (b % res == 0)) // checking the number which stored in res is divisible by both a and b or not
              break; // if the number is divisible by both then the loop terminate

  printf("HCF = %d", res); // print that res
  return 0;
}
