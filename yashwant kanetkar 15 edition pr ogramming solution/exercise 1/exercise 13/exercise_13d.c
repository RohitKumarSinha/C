#include <stdio.h>
int modify (int a[10]);
int main()
{
  int a[10], i, res;

  printf("enter 10 integer number :- ");
  for (i = 0; i<= 9; i++)
  scanf("%d", &a[i]);

   modify(a); // passing only the name of array

   for (i = 0; i < 10; i++) // printing the return array in main
   printf("\n%d", a[i]);

  return 0;
}

int modify(int b[10])
{
  int i;

  for (i = 0; i<= 9; i++)
  b[i] = b[i] * 3;

  return b[i]; // returning the whole array to the main
}
