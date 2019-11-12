#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int compare(const void *a, const void *b);

struct cricketers
{
  int avrun;
  char name[30];
  int age;
  int notm;
}india[MAX] = {
                122, "sachin tendulkar", 30, 67,
                97, "virendra shewag", 35, 56,
                66, "irfan pathan", 32, 45,
                101, "yuvaraj singh", 32, 45,
};

int main()
{
  int i;

  qsort(india, 5, sizeof(struct cricketers), compare);
  // qsort() is a standard library function
  // view the link below for more info
  // https :// www.tutorialpoint.com/ c_standard_library/c_function_qsort.html

  for (i = 0; i < 5; i++)
  {
    printf("name : %s",india[i].name);
    printf("\nage : %d", india[i].age);
    printf("\ntotal test matches played : %d", india[i].notm);
    printf("\naverage run : %d\n\n", india[i].avrun);
  }

  return 0;
}

int compare(const void *a, const void *b)
{
  return (*(int*)a - *(int*)b);
}
