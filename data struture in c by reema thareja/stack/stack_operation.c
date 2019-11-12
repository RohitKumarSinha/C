// write a program to perform Push, Pop, and peek operation on a stack

#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int st[MAX], top = -1;

void push(int st[], int val);
int pop(int st[]);
void display(int st[]);
int peek(int st[]);


// menu driven program
int main()
{
  int choice, val;
  while (1)
  {
    printf("\n1. push");
    printf("\n2. pop");
    printf("\n3. display");
    printf("\n4. peek");
    printf("\n5. exit");

    printf("\nenter your choice");
    scanf("%d", &choice);

    switch (choice)
    {
      case 1:
      printf("\nenter the value for push operation :- ");
      scanf("%d", &val);

      push(st, val);
      break;

      case 2:
      val = pop(st);
      if (val != -1)
         printf("%d\n", val);
         break;

      case 3:
      display(st);
      break;

      case 4:
      val = peek(st);
      if (val != -1)
      printf("%d\n", val);
      break;

      case 5:
      exit(0);
    }

  }
}

// for pushing the number into stack
void push(int st[], int val)
{
  if (top == MAX - 1)
  {
    printf("\nSTACK IS FULL");
  }

  else
  {
    top++;
    st[top] = val;
  }
}

// for poping the number into stack
int pop(int st[])
{
  int val;
  if (top == -1)
  {
    printf("\nSTACK IS EMPTY");
    return -1;
  }

  else
  {
    val = st[top];
    top--;
    return (val);
  }
}

// for find the first value into stack
int peek(int st[])
{
  if (top == -1)
  {
    printf("\nSTACK IS EMPTY");
    return -1;
  }

  else
  {
    return (st[top]);
  }
}

// for displaying the stack
void display(int st[])
{
  if (top == -1)
  {
    printf("\nSTACK IS EMPTY");
  }

  else
  {
    for(int i = top; i >= 0; i--)
        printf("%d\t", st[i]);

      printf("\n");
  }
}
