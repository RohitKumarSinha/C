/* write a program to read and display the information about all the employees in a department. Edit the
   details of the ith employee and redisplay the information */

#include <stdio.h>

typedef struct
{
  int emp_code;
  float emp_fees;
  char emp_name[50];
}employee;

int main()
{
  employee e[2];
  int edit;

  for (int emp = 0; emp < 2; emp++)
  {
    printf("Enter the name of the employee :- ");
    gets(e[emp].emp_name);

    printf("Enter the employee code :- ");
    scanf("%d", &e[emp].emp_code);

    printf("enter the employee salary :- ");
    scanf("%f", &e[emp].emp_fees);

    printf("\n\n");
    fflush(stdin);
  }

  for (int emp = 0; emp < 2; emp++)
  {
    printf("employee name = %s\n", e[emp].emp_name);
    printf("employee code = %d\n", e[emp].emp_code);
    printf("employee salary = %.2f\n", e[emp].emp_fees);

    printf("\n\n");
  }

  printf("which employee you want to edit record :- ");
  scanf("%d", &edit);

  edit = edit - 1;

  fflush(stdin);

  printf("Enter the employee new name :- ");
  gets(e[edit].emp_name);

  printf("Enter the employee new code :- ");
  scanf("%d", &e[edit].emp_code);

  printf("Enter the employee new salary :- ");
  scanf("%f", &e[edit].emp_fees);

   printf("\n\n");

  for (int emp = 0; emp < 2; emp++)
  {
    printf("employee name = %s\n", e[emp].emp_name);
    printf("employee code = %d\n", e[emp].emp_code);
    printf("employee salary = %.2f\n", e[emp].emp_fees);

    printf("\n\n");
  }

  return 0;
}
