/* write a program using pointer to structure to initialize the members of an employee structure. use fuctions
   to print the employee's information */

#include <stdio.h>

typedef struct
{
  char name[50];
  int emp_code;
  int emp_sal;

}emp;

void display(emp *ptr);

int main()
{
  emp e1, *ptr_e1;
  ptr_e1 = &e1;

  printf("enter the name of the employee :- ");
  gets(ptr_e1->name);

  printf("enter the %s code :- ", ptr_e1->name);
  scanf("%d", &ptr_e1->emp_code);

  printf("enter the %s salary :- ", ptr_e1->name);
  scanf("%d", &ptr_e1->emp_sal);

  display(ptr_e1);

  return 0;
}

void display(emp *ptr)
{
  printf("\n\nname = %s\n", ptr->name);
  printf("employee code = %d\n", ptr->emp_code);
  printf("employee salary = %d", ptr->emp_sal);
}
