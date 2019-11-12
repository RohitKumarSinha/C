// write a program to print all odd numbers from m to n

#include <stdio.h>

int main()
{
  int first_num, sec_num;

  printf("Enter the first number : ");
  scanf("%d", &first_num);

  printf("Enter the second number :- ");
  scanf("%d", &sec_num);

  for (first_num; first_num <= sec_num; first_num++)
  {
    if (first_num % 2 != 0)
        printf("%d\n", first_num);
  }

  return 0;
}
