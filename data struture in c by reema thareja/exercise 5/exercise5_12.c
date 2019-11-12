/* write a program to create a structure with the information given below. Then, read and print the data

Employee[10]

(a) Emp_Id

(b) Name
    (1) First Name
    (2) Middle Name
    (3) Last Name

(c) Address
   (1) Area
   (2) city
   (3) state

(d) Age
(e) salary
(f) Designation  */

#include <stdio.h>

int main()
{

  typedef struct
  {
    char first_name[30];
    char mid_name[30];
    char last_name[30];

  }name;

  typedef struct
  {
    char area[50];
    char city[20];
    char state[20];

  }address;


  typedef struct
  {
    int emp_id;
    name emp_name;
    address emp_add;
    int age;
    int salary;
    char desig[30];
  }Employee;


  Employee emp[10];

  for (int i = 0; i < 10; i++)
  {
    printf("Enter the %d Employee first name :- ", i + 1);
    gets(emp[i].emp_name.first_name);

    printf("Enter the %d Employee middle name :- ", i + 1);
    gets(emp[i].emp_name.mid_name);

    printf("Enter the %d Employee last name :- ", i + 1);
    gets(emp[i].emp_name.last_name);

    printf("Enter in which area %d Employee live :- ", i + 1);
    gets(emp[i].emp_add.area);

    printf("Enter in which city %d Employee live :- ", i + 1);
    gets(emp[i].emp_add.city);

    printf("Enter in which state %d Employee live :- ", i + 1);
    gets(emp[i].emp_add.state);

    printf("Enter the %d Employee id :- ", i + 1);
    scanf("%d", &emp[i].emp_id);

    printf("Enter the %d Employee age :- ", i + 1);
    scanf("%d", &emp[i].age);

    printf("Enter the %d Employee salary :- ", i + 1);
    scanf("%d", &emp[i].salary);

    fflush(stdin);
    printf("Enter the %d Employee Designation :- ", i + 1);
    gets(emp[i].desig);

    printf("\n\n");
    fflush(stdin);
  }


  for (int i = 0; i < 10; i++)
  {
    printf("%d Employee name :- %s %s %s\n", i + 1, emp[i].emp_name.first_name, emp[i].emp_name.mid_name, emp[i].emp_name.last_name);
    printf("%d Employee Address :- %s %s %s\n", i + 1, emp[i].emp_add.area, emp[i].emp_add.city, emp[i].emp_add.state);
    printf("%d Employee id :- %d\n", i + 1, emp[i].emp_id);
    printf("%d Employee age :- %d\n", i + 1, emp[i].age);
    printf("%d Employee salary :- %d\n", i + 1, emp[i].salary);
    printf("%d Employee Designation :- %s\n", i + 1, emp[i].desig);

    printf("\n\n");
  }

  return 0;

}
