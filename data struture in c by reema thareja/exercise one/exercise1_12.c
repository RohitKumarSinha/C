// write a program that prints a floating point value in exponential format with the following specifications:
// a) correct to two decimal places
// b) correct to four decimal places
// c) correct to six decimal places

#include <stdio.h>

int main()
{
  float num;

  printf("Enter a real number :- ");
  scanf("%f", &num);

  printf("correct to two decimal places is %.2f\n", num);
  printf("correct to four decimal places is %.4f\n", num);
  printf("correct to six decimal places is %.6f\n", num);

  return 0;
}
