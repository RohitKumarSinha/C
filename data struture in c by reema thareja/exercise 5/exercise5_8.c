// write a program to add and subtract height 6'2" and 5'4".

#include <stdio.h>

typedef struct
{
  int feet;
  int inch;

}height;

int main()
{
  height h1, h2, h3;

  printf("enter the first person height in feet :- ");
  scanf("%d", &h1.feet);

  printf("enter the first person height in inch :- ");
  scanf("%d", &h1.inch);

  printf("enter the second person height in feet :- ");
  scanf("%d", &h2.feet);

  printf("enter the second person height in inch :- ");
  scanf("%d", &h2.inch);

   h3.feet = h1.feet + h2.feet;
   h3.inch = h1.inch + h2.inch;

   if (h3.inch >= 10)
   {
     h3.feet += h3.inch % 10;
     h3.inch = h3.inch / 10;
   }

   printf("\n\nafter adding  the height your result is %d feet and %d inches", h3.feet, h3.inch);

   h3.feet = h1.feet - h2.feet;
   h3.inch = h1.inch - h2.inch;

   if (h3.inch < 0)
   {
     h3.feet = h3.feet - 1;
     h3.inch = h1.inch + 10 - h2.inch;
   }

   printf("\n\nafter subtracting  the height your result is %d feet and %d inches\n\n", h3.feet, h3.inch);


   return 0;
}
