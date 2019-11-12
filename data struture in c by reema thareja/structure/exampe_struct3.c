// write a program to read and display the information of a student using a nested sturcture

#include <stdio.h>

int main()
{
  typedef struct
  {
    int dd;
    int mm;
    int yy;
  }dob;

  typedef struct
  {
    char first_name[20];
    char mid_name[20];
    char last_name[20];
  }name;

  typedef struct
  {
    name stud_name;
    int age;
    dob stud_dob;
    int fees;
  }student;

  student s;

  printf("enter the student first name :- ");
  scanf("%s", s.stud_name.first_name);

  printf("enter the student middle name :- ");
  scanf("%s", s.stud_name.mid_name);

  printf("enter the student last name :- ");
  scanf("%s", s.stud_name.last_name);

  printf("enter the student age :- ");
  scanf("%d", &s.age);

  printf("enter the student date of birth in dd/ mm/ yy format :- ");
  scanf("%d %d %d", &s.stud_dob.dd, &s.stud_dob.mm, &s.stud_dob.yy);

  printf("enter the student fees :- ");
  scanf("%d", &s.fees);


  printf("\n\nstudent name :- %s %s %s\n", s.stud_name.first_name, s.stud_name.mid_name, s.stud_name.last_name);
  printf("student age :- %d\n", s.age);
  printf("student date of birth %d/ %d/ %d\n", s.stud_dob.dd, s.stud_dob.mm, s.stud_dob.yy);
  printf("student fees :- %d\n", s.fees);

  return 0;
}
