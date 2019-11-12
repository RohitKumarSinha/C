// write a program using structures to read and display the information about a student

#include <stdio.h>

int main()
{
  typedef struct
  {
    char stud_name[30];
    int stud_age;
    int dd, mm, yy;
    float fees;
  }student;

  student s1;

  printf("Enter the student name :- ");
  gets(s1.stud_name);

  printf("Enter the student age :-");
  scanf("%d", &s1.stud_age);

  printf("Enter the student date of birth in dd/ mm/ yy format :- ");
  scanf("%d %d %d", &s1.dd, &s1.mm, &s1.yy);

  printf("Enter the student fees  :- ");
  scanf("%f", &s1.fees);

  printf("\n\nstudent name :- %s\n", s1.stud_name);
  printf("student age :- %d\n", s1.stud_age);
  printf("student date of birh :- %d %d %d\n", s1.dd, s1.mm, s1.yy);
  printf("stduent fees :- %.2f", s1.fees);

  return 0;
}
