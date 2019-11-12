// write a program to read and display a square (using functions)

#include <stdio.h>

void read(int num[]);
void display(int num[]);


int main()
{
  int num[5];

  read(num);
  display(num);

  return 0;
}

void read(int num[5])
{
  for (int i = 0; i < 5; i++)
  {
    printf("num[%d] = ", i);
    scanf("%d", &num[i]);
  }
}

void display(int num[5])
{
  printf("\n");

  for (int i = 0; i < 5; i++)
  {
    printf("num[%d] = %d\n", i, num[i]);
  }
}
