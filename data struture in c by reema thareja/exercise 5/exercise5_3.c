/* Modify Question 2 to print each student's average marks and the class average (that includes avaerage  of
   all the student marks) */

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
  float class_average = 0;

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

    printf("%.2f", d[stud].aggregate_marks);

    class_average += d[stud]. aggregate_marks;

   printf("\n\n");
   fflush(stdin);
  }

  for (int stud = 0; stud < 10; stud++)
  {
    if (d[stud].aggregate_marks < 40)
    {
      printf("%s\n", d[stud].student_name);
    }
  }

  printf("class average of total student is %.2f", class_average / 10);

  return 0;
}
