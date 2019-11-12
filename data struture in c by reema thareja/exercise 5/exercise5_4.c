/* Make an array of students as illustrated in question 1 and write a program to display the details of the
   student's marks */

#include <stdio.h>

typedef struct name
{
  char first_name[30];
  char mid_name[30];
  char last_name[30];
}Name;

typedef struct dob
{
  int dd;
  int mm;
  int yy;
}DOB;

typedef struct marks
{
  float english;
  float mathematics;
  float cs;
}Marks;

typedef struct Detail
{
  int student_code;
  int roll_no;
  Name name1;
  char sex[8];
  DOB D1;
  Marks m1;
}detail;


int main()
{
  detail d[5];

  for (int stud = 0; stud < 5; stud++)
  {
    printf("Enter the student code :- ");
    scanf("%d", &d[stud].student_code);

    printf("Enter the roll no of the student :- ");
    scanf("%d", &d[stud].roll_no);

    printf("Enter the first name of the student :- ");
    scanf("%s", d[stud].name1.first_name);

    printf("Enter the middle name of the student :- ");
    scanf("%s", d[stud].name1.mid_name);

    printf("Enter the last name of the student :- ");
    scanf("%s", d[stud].name1.last_name);

    printf("Enter the sex of the student  :-  ");
    scanf("%s", d[stud].sex);

    printf("Enter the Birth date of the student in dd/mm/yy format :- ");
    scanf("%d %d %d", &d[stud].D1.dd, &d[stud].D1.mm, &d[stud].D1.yy);

    printf("Enter the marks of english :- ");
    scanf("%d", &d[stud].m1.english);

    printf("Enter the marks of Mathematics :- ");
    scanf("%d", &d[stud].m1.mathematics);

    printf("Enter the marks of computer science :- ");
    scanf("%d", &d[stud].m1.cs);

    printf("\n\n");
  }


  for (int stud = 0; stud < 5; stud++)
  {
    printf("student code = %d\n", d[stud].student_code);
    printf("roll no = %d\n", d[stud].roll_no);
    printf("student name = %s %s %s\n", d[stud].name1.first_name, d[stud].name1.mid_name, d[stud].name1.last_name);
    printf("sex = %s\n", d[stud].sex);
    printf("date of bitrh = %d / %d / %d\n", d[stud].D1.dd, d[stud].D1.mm, d[stud].D1.yy);
    printf("mathematics = %.2f   english = %.2f    computer science = %.2f", d[stud].m1.english, d[stud].m1.mathematics, d[stud].m1.cs);

    printf("\n\n");
  }

  return 0;
}
