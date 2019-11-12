#include <stdio.h>

int main ()
{

  int num;

  printf("enter an integer number :- ");
  scanf("%d", &num);

  if (num & 1) // num is converted into binary form and then it adds up 1 in binary form
  // after adding its last position is 1 then it is odd number
  // we use bit wise operatotr to solve this problem ...
      printf("this is odd number .");

  else
      printf("this is even number .");
}
