/* write a program to read and display the information of all the students in a class. Then edit the details of the
   ith student and redisplay the entire information */

#include <stdio.h>

int main()
{
  typedef struct
  {
    char stud_name[30];
    int age;
    int fees;
  }student;

  student s[2];

  for (int i = 0; i < 2; i++)
  {
    printf("enter the %d student name :- ", i + 1);
    gets(s[i].stud_name);

    printf("enter the %d student age :- ", i + 1);
    scanf("%d", &s[i].age);

    printf("enter the %d student fees :- ", i + 1);
    scanf("%d", &s[i].fees);

    printf("\n\n");

    fflush(stdin);
  }

  for (int i = 0; i < 2; i++)
  {
    printf("%d student name :- %s\n ", i + 1, s[i].stud_name);
    printf("%d student age :- %d\n", i + 1, s[i].age);
    printf("%d student fees :- %d\n", i + 1, s[i].fees);

    printf("\n\n");
  }

  int pos;

  printf("in which student record you want to edit :- ");
  scanf("%d", &pos);

  pos--;

  fflush(stdin);
  printf("enter the new student name :- ");
  gets(s[pos].stud_name);

  printf("enter the new student age :- ");
  scanf("%d", &s[pos].age);

  printf("enter the new student fees :- ");
  scanf("%d", &s[pos].fees);

  printf("\n\n");


  for (int i = 0; i < 2; i++)
  {
    printf("%d student name :- %s\n ", i + 1, s[i].stud_name);
    printf("%d student age :- %d\n", i + 1, s[i].age);
    printf("%d student fees :- %d\n", i + 1, s[i].fees);

    printf("\n\n");
  }

  return 0;
}
