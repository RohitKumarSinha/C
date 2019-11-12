// write a program to implement multiple stack

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void pushA(int val);
int popA();
void displayA();
void pushB(int val);
int popB();
void displayB();

int st[MAX];
int topA = -1, topB = MAX;
int val;

void pushA(int val)
{
  if (topA == topB - 1)
      printf("\nSTACK IS FULL");

  else
  {
    topA += 1;
    st[topA] = val;
  }
}

int popA()
{
  int val;
  if (topA == -1)
  {
    printf("\nSTACK IS EMPTY");
    return -999;
  }

  else
  {
    val = st[topA];
    topA--;
  }

  return val;
}

void displayA()
{
  if (topA == -1)
     printf("\nSTACK  IS EMPTY");

  else
  {
    for (int i = topA; i >= 0; i--)
         printf("%d\t", st[i]);
  }

}

void pushB(int val)
{
  if (if topB  - 1 == topA)
      printf("\nSTACK IS FULL");


  else
  {
    topB -= 1;
    stack[topB] = val;
  }
}

int popB()
{
  int val;
  if (topB == MAX)
  {
    printf("\nSTACK IS EMPTY");
    val = -999;
  }

  else
  {
    val = stack[topB];
    topB++;
  }
}

void displayB()
{
  int i;
  if (topB == MAX)
      printf("\nSTACK IS EMPTY");

  else
  {
    for (int i = topB; i < MAX; i++)
        printf("%d\t", stack[i]);
  }
}

// menu driven program
int main()
{
  int choice, val;
  while (1)
  {
    printf("\n1. push for stack one");
    printf("\n2. pop for stack one");
    printf("\n3. display for stack one");
    printf("\n4. push for stack two");
    printf("\n5. pop for stack two");
    printf("\n6. display for stack two");
    printf("\n7. exit");

    printf("\nenter your choice");
    scanf("%d", &choice);

    switch (choice)
    {
      case 1:
      printf("\nenter the value for push operation for stack A:- ");
      scanf("%d", &val);

      pushA(val);
      break;

      case 2:
      val = popA();
      if (val != -999)
         printf("%d\n", val);
         break;

      case 3:
      displayA();
      break;


      case 4:
      printf("\nenter the value for push operation for stack B:- ");
      scanf("%d", &val);

      pushB(val);
      break;

      case 5:
      val = popB();
      if (val != -999)
         printf("%d\n", val);
         break;

      case 6:
      displayB();
      break;

      case 7:
      exit(0);
    }

  }
}
