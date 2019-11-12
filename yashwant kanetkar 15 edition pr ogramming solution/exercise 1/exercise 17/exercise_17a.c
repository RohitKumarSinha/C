#include <stdio.h>
#include <conio.h>
#include <windows.h>
void student_in_year(int);
void student_data(int);

struct student
{
  int roll;
  char name[50];
  char department[50];
  char course[20];
  int yoj;
}nos[450] = {1, "rohit", "cse", "bca", 2010,
             2, "ritik", "civil", "civil", 2011,
             3, "mamta", "law", "advocate", 2012,
             4, "sanjay", "electrical", "mehanical", 2010};

int main()
{
   int yoj, roll;

   printf("\nEnter year of joining of the student : ");
   scanf("%d", &yoj);
   student_in_year(yoj);

   system("cls");

   printf("enter the roll number of the student you want data : ");
   scanf("%d", &roll);
   student_data(roll);

  return 0;
}

void student_in_year(int year)
{
  int i;
  printf("\n\t\tYear of joining : %d\n\n",year);
  for (i = 0; i <= 450; i++)
  {
    if (nos[i].yoj == year)
    {
      printf("\nRoll Number :  %d", nos[i].roll);
      printf("\nName : %s", nos[i].name);
      printf("\nDepartment : %s", nos[i].department);
      printf("\nCourse : %s\n", nos[i].course);
      getch();
    }
  }
}

void student_data(int enroll)
{
  int i;
  printf("\nRoll number : %d", enroll);
  for (i = 0; i <= 450; i++)
  {
    if (nos[i].roll == enroll)
    {
      printf("\nName : %s", nos[i].name);
      printf("\nDepartment : %s", nos[i].department);
      printf("\nCourse : %s", nos[i].course);
      printf("\nyear of joining : %d",nos[i].yoj);
    }
  }
}
