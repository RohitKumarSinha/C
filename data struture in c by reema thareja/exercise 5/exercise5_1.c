
/* declare a structure that represents the following hierarchical information

(a) student
(b) Roll number
(c) Name
   (1) First Name
   (2) Middle Name
   (3) Last Name

(d) Sex
(e) Date of Birth
    (1) Day
    (2) Month
    (3) year

(f) Marks
    (1) English
    (2) Mathematics
    (3) computer science
*/

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
  detail d1;

  printf("Enter the student code :- ");
  scanf("%d", &d1.student_code);

  printf("Enter the roll no of the student :- ");
  scanf("%d", &d1.roll_no);

  printf("Enter the first name of the student :- ");
  scanf("%s", d1.name1.first_name);

  printf("Enter the middle name of the student :- ");
  scanf("%s", d1.name1.mid_name);

  printf("Enter the last name of the student :- ");
  scanf("%s", d1.name1.last_name);

  printf("Enter the sex of the student  :-  ");
  scanf("%s", d1.sex);

  printf("Enter the Birth date of the student in dd/mm/yy format :- ");
  scanf("%d %d %d", &d1.D1.dd, &d1.D1.mm, &d1.D1.yy);

  printf("Enter the marks of english :- ");
  scanf("%d", &d1.m1.english);

  printf("Enter the marks of Mathematics :- ");
  scanf("%d", &d1.m1.mathematics);

  printf("Enter the marks of computer science :- ");
  scanf("%d", &d1.m1.cs);

  return 0;
}
