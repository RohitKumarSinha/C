/* Define a structure to store the name, an array marks[] which stores the marks of three different subjects,
   and a character grade. write a program to display the details of the student whose name is entered by the
   user. Use the structure defination of the first question to make an array of students. Display the name of
   the students who have secured less than 40% of the aggregate */

#include <stdio.h>

typedef struct student_detail
{
  char student_name[50];
  int english_marks;
  int math_marks;
  int cs_marks;
  float aggregate_marks;
  char char_grade;
}detail;

int main()
{
  detail d[10];

  for (int stud = 0; stud < 10; stud++)
  {
    printf("Enter the student name  :- ");
    gets(d[stud].student_name);

    printf("Enter the marks of student in english :- ");
    scanf("%d", &d[stud].english_marks);

    printf("Enter the marks of student in english :- ");
    scanf("%d", &d[stud].math_marks);

    printf("Enter the marks of student in english :- ");
    scanf("%d", &d[stud].cs_marks);

    d[stud].aggregate_marks = (d[stud].english_marks + d[stud].math_marks + d[stud].cs_marks) / 3;

   printf("\n\n");
   fflush(stdin);
  }

  for (int stud = 0; stud < 10; stud++)
  {
    if (d[stud].aggregate_marks < 40)
    {
      printf("%s                %f\n", d[stud].student_name, d[stud].aggregate_marks);
    }
  }

  return 0;
}
