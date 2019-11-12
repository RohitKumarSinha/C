// write a program to read, display, add and subtract two complex number

#include <stdio.h>

int main()
{
  typedef struct
  {
    int real;
    int img;
  }complex;

  complex c1, c2;

  printf("enter the real part of first complex number :- ");
  scanf("%d", &c1.real);

  printf("enter the imaginary part of the first complex number :- ");
  scanf("%d", &c1.img);

  printf("enter the real part of second complex number :- ");
  scanf("%d", &c2.real);

  printf("enter the imaginary part of the second complex number :- ");
  scanf("%d", &c2.img);


  printf("\n\nyour first complex number is %d + %dj\n", c1.real, c1.img);
  printf("your second complex number is %d + %dj\n", c2.real, c2.img);

  printf("\n\nafter adding two complex number your result is %d + %dj\n", c1.real + c2.real, c1.img + c2.img);
  printf("after subtracting two complex number your result is %d + %dj\n", c1.real - c2.real, c1.img - c2.img);


  return 0;
}
a
