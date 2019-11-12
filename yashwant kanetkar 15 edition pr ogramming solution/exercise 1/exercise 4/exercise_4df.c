#include <stdio.h>

int main()
{
  float weight;

  printf("enter the weight of the boxer in pounds : - ");
  scanf("%f", &weight);

  if (weight < 115)
  {
    printf("the boxer class is flyweight");
  }

  else if (weight >= 115 && weight <= 121)
  {
    printf("the boxer class is Bantamweight");
  }

  else if ( weight >= 122 && weight <= 153)
  {
    printf("the boxer class is featherweight");
  }

  else if (weight >= 154 && weight <= 189)
  {
    printf("the boxer class is middleweight");
  }

  else if (weight >= 190)
  {
    printf("the boxer class is Heavyweight");
  }
  return 0;
}
