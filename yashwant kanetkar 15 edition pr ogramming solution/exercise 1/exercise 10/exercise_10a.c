// #include <stdio.h>
//
// int main()
// {
//   int num, sum = 0, s;
//
//   printf("enter a integer number :- ");
//   scanf("%d", &num);
//
//   while(num != 0)
//   {
//     s = num % 10;
//     sum = sum + s;
//     num = num / 10;
//   }
//
//   printf("the sum of all digit of your integer number is %d", sum);
//   return 0;
// }


#include <stdio.h>
int sum(int);
int main()
{
  int num, res;

  printf("enter a integer number :- ");
  scanf("%d", &num);

  res = sum(num);
  printf("the sum of digit of the number is %d", res);
  return 0;
}

int sum(int n)
{
  int add;

  if (n == 0)
  {
    return 0;
  }

  else
  {
    add = n % 10;
    add = add + sum(n / 10);
    return add;
  }
}
