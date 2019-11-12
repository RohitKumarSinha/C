// #include <stdio.h>
// int decimal(int);
// int main()
// {
//   int num, res;
//   printf("enter a integer number :- ");
//   scanf("%d", &num);
//
//   res = decimal(num);
//   printf("decimal number of your number is %d", res);
//   return 0;
// }
//
// int decimal(int n)
// {
//   int s;
//
//   if (n == 0)
//      return 0;
//
//   else
//   {
//     s = (n % 2 +  10 * decimal(n / 2));
//     return s;
//   }
// }

#include <stdio.h>
void decimal(int);
int main()
{
  int num;
  printf("enter a integer number :- ");
  scanf("%d", &num);

  decimal(num);
  return 0;
}

void decimal(int n)
{
  int s, k;
  for (s = 31; s >= 0; s--)
  {
     k = n >> s;   // k = 24 >> 31

      if (k & 1)
         printf("1");

      else
          printf("0");

  }
}
