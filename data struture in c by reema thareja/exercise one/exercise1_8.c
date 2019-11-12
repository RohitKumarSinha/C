/* write a program to calculate salary of an employee given his basic pay (to be entered by the user)
 HRA = 10% of the basic pay, TA = 5% of basic pay. Define HRA and TA as constants and use them to
 calculate the salary of the employee */

 #include <stdio.h>

 int main()
 {
  float basic_pay;
  float salary;
  
  printf("Enter your basic_pay :- ");
  scanf("%f", &basic_pay);

  float const HRA = (basic_pay / 100) * 10;
  float const TA = (basic_pay / 100) * 5;

  salary = basic_pay + HRA + TA;

  printf("according to your basic pay your salary is :- %.2f ", salary);

  return 0;
 }
