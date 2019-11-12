#include <stdio.h>
#include <windows.h>
int main()
{
  int i;

  struct student
  {
    char name[20];
    int rollno;
    int mark1, mark2, mark3, mark4, mark5;
    float avg;
  };

  struct student s[10];

  for(i = 0; i <= 9; i++)
  {
    printf("\n\nenter the name of %i student :- ", i+1);
    scanf("%s", &s[i].name);

    printf("enter the roll no of the student :- ");
    scanf("%d", &s[i].rollno);

    printf("enter the marks of five subject of the student :- ");
    scanf("%d%d%d%d%d", &s[i].mark1, &s[i].mark2, &s[i].mark3, &s[i].mark4, &s[i].mark5);

    s[i].avg = (s[i].mark1 + s[i].mark2 + s[i].mark3 + s[i].mark4 + s[i].mark5) / 5;
  }

  system("cls");
  printf("NAME     ROLL NO    MARKS 1   MARKS 2  MARKS 3  MARKS 4  MARKS 5  PERCENTAGE\n\n");
  for (i = 0; i <= 9; i++)
  {
  printf("%s         %d         %d        %d        %d      %d       %d        %.2f\n", s[i].name, s[i].rollno, s[i].mark1, s[i].mark2, s[i].mark3, s[i].mark4, s[i].mark5, s[i].avg);
  }
  return 0;
}
