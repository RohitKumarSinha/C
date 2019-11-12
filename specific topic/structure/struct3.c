#include <stdio.h>

struct complex
{
  float real;
  float img;
};

struct complex sum(struct complex n1, struct complex n2);
int main()
{
    struct complex s1, s2, temp;

  printf("enter the two numbers :- ");
  scanf("%f %f", &s1.real, &s1.img);

  printf("enter the real and imaginary part respectively :\n");
  scanf("%f %f", &s2.real, &s2.img);

  temp = sum(s1, s2);
  printf("real = %.1f  and imaginary = %.1fi", temp.real, temp.img);

  return 0;
}

struct complex sum(struct complex n1, struct complex n2)
{
   struct complex temp;
   temp.real = n1.real + n2.real;
   temp.img = n1.img + n2.img;
   return (temp);
}
