// write a program to read and display names of employees in a department

#include <stdio.h>

int main()
{
  int no_of_emp;

  printf("enter how many employees in the the department :- ");
  scanf("%d", &no_of_emp);

  char employees[no_of_emp][30];

  printf("\n\nenter the names\n\n");

  for (int i = 0; i <= no_of_emp; i++)
  {
    gets(employees[i]);
  }

  printf("\n\nyour employees are :- \n\n");

  for (int i = 0; i <= no_of_emp; i++)
  {
    puts(employees[i]);
  }

  return 0;
}
