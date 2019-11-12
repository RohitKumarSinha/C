#include <stdio.h>

int main()
{

  float kg, hei, bmi;

  printf("enter the weight of the person in kilogram :- ");
  scanf("%f", &kg);

  printf("print the height of the person in meters :- ");
  scanf("%f", &hei);

  bmi = (kg / (hei * hei));

  if (bmi < 15)
  {
    printf("your BMI category is starvation");
  }

  else if ((bmi > 15) && (bmi <= 17.5))
  {
    printf("your BMI category is Anorexic");
  }

  else if ((bmi > 17.5) && (bmi <= 18.5))
  {
    printf("your BMI category is underweight");
  }

  else if ((bmi > 18.5) && (bmi <= 24.9))
  {
    printf("your BMI category is ideal");
  }

  else if ((bmi > 24.9) && (bmi <= 25.9))
  {
    printf("your BMI category is overweight");
  }

  else if ((bmi > 30) && (bmi <= 30.9))
  {
    printf("your BMI category is obese");
  }

  else if (bmi >= 40)
  {
    printf("your BMI category is morbidly obese");
  }

  else
  {
    printf("invalid input");
  }
  
  return 0;
}
