#include <stdio.h>

int main()
{
  struct student
  {
    char name[30];
    int rollno;
    float mark1, mark2, mark3, mark4, mark5;
    float avg;
  };

  struct student s1;
  printf("enter the student's name :- ");
  scanf("%s", &s1.name);

  printf("enter the rollno of the student :- ");
  scanf("%d", &s1.rollno);

  printf("enter the marks of five subject of a student :- ");
  scanf("%f%f%f%f%f", &s1.mark1, &s1.mark2, &s1.mark3, &s1.mark4, &s1.mark5);

  s1.avg = (s1.mark1 + s1.mark2 + s1.mark3 + s1.mark4 + s1.mark5) / 5;
  printf("average of the student %f", s1.avg);

  return 0;
}
