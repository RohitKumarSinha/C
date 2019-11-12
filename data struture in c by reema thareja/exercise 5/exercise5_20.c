/* Declare a structure fraction that has two fields - numerator and denominator. create two variables and compare them
   using fuction . Return 0 if the two fractions are equal, -1 if the first fraction is less than the second  and 1
   otherwise. you may convert a fraction into floating point number for your convenience */

#include <stdio.h>

typedef struct
{
  int nume;
  int deno;
}fraction;

int comp_fract(fraction, fraction);

int main()
{
   fraction f1, f2;
   int res = 0;

   printf("Enter the numerator of first fraction :- ");
   scanf("%d", &f1.nume);

   printf("Enter the denominator of first fraction :- ");
   scanf("%d", &f1.deno);

   printf("Enter the numerator of second fraction :- ");
   scanf("%d", &f2.nume);

   printf("Enter the denominator of first fraction :- ");
   scanf("%d", &f2.deno);


  res = comp_fract(f1, f2);

  if (res == 0)
      printf("both fraction are equal ");

  else if (res == -1)
       printf("first fraction is less than second ");

   else
      printf("first fraction is greater than second ");

  return 0;
}

int comp_fract(fraction f1, fraction f2)
{
  float res_f1, res_f2;

  res_f1 = f1.nume / f1.deno;
  res_f2 = f2.nume / f2.deno;

  if (res_f1 == res_f2)
  {
    return 0;
  }

  else if (res_f1 < res_f2)
  {
    return -1;
  }

  else
  {
    return 1;
  }
}
