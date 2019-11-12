#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct course
{
  char subjects[30];
  int marks;
};

int main()
{
  struct course *ptr;
  int no_of_records, i;
  // allocates the memory for no of rrecords structures with pointer ptr to the base address
  ptr = (struct course*) malloc (no_of_records * sizeof(struct course));

  printf("enter the no of records of the course :- ");
  scanf("%d", &no_of_records);

  for (i = 0; i < no_of_records; i++)
  {
    printf("enter the subject name and marks of the student :- ");
    scanf("%s %d", &(ptr + i)->subjects, &(ptr + i)->marks);
  }

  system("cls");

  printf("SUBJECT                              MARKS\n\n");
  for (i = 0; i < no_of_records; i++)
       printf("%s                           %d\n", (ptr + i)->subjects, (ptr + i)->marks);

    return 0;
}
