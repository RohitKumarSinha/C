/* write a program to define a union and a structure both having exactly the same members. using the sizeof operator
   print the size of operator, print the structure variable as well as union variable and comment on the result */

#include <stdio.h>

int main()
{
  typedef struct
  {
    char name;
    int roll;
    float fees;
  }name;

  typedef union
  {
    char name;
    int roll;
    float fees;
  }student;

  name n;
  student s;


  printf("%d\n", sizeof(n)); // this give us 12 byte because it add total data type byte
  printf("%d", sizeof(s)); // this give us 4 byte which is the maximum of all data type 

  return 0;
}
