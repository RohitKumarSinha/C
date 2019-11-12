#include <stdio.h>

int main()
{
  float hard, cont, stren;

  printf("enter the hardness , carbon content , tensile strength of the steel :- \n");
  scanf("%f %f %f", &hard, &cont, &stren);

  if ((hard > 50) && (cont < 0.7) && (stren > 5600))
  {
    printf("you got grade 10");
  }

  else if ((hard > 50) && (cont < 0.7))
  {
    printf("you got grade 9");
  }

  else if ((cont < 0.7) && (stren > 5600))
  {
    printf("you got grade 8");
  }

  else if ((hard > 50) && (stren > 5600))
  {
    printf("you got grade 7");
  }

  else if ((hard > 50) || (cont < 0.7) || (stren > 5600))
  {
    printf("you got grade 6");
  }

  else
  {
    printf("you got grade 5");
  }

  return 0;
}
