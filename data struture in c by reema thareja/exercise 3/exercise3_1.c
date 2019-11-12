/* consider an array MARKS[20][5] which stores the marks obtained by 20 students in 5 subjects. Now write a
   program to

   (a) find the Average marks obtained in each subject
   (b) find the Average marks obtained by every student
   (c) find the number of students who have scored below 50 in their Average
   (d) display the scores obtained by every student */

#include <stdio.h>

int main()
{
  int MARKS[20][5], sum_subject[5] = {0, 0, 0, 0, 0};
  int sum_student[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int below_fifty = 0;

  for (int i = 0; i < 20; i++)
  {
    printf("Enter the marks of %d student of five subject \n", i + 1);
    for (int j = 0; j < 5; j++)
    {
      printf("%d subject :- ", j + 1);
      scanf("%d", &MARKS[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < 20; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      sum_subject[j] += MARKS[i][j];
    }
  }

    for (int i = 0; i < 5; i++)
    {
      printf("Average marks of %d subject is %d\n", i + 1, sum_subject[i] / 20);
    }


   for (int i = 0; i < 20; i++)
 {
   for (int j = 0; j < 5; j++)
   {
      sum_student[i] += MARKS[i][j];
   }
 }

  printf("\n");

  for (int i = 0; i < 20; i++)
 {
    printf("Average marks of %d student is %d\n", i + 1, sum_student[i] / 5);
 }

 for (int i = 0; i < 20; i++)
 {
   if (sum_student[i] / 5 < 50)
       below_fifty++;
 }

 printf("\nThere are %d student who have scored below 50 in their Average.", below_fifty);

 printf("\n");

 for (int i = 0; i < 20; i++)
     printf("marks of %d student is %d\n", i + 1, sum_student[i]);

  return 0;

}
