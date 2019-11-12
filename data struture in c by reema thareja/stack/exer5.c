// write a program to input two stacks  and compare their content

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void push(char name[]);
void pop();
void display();
void topp();
void compare();

int top = -1;
char stack[1][50];
int main()
{
  int choice;
  char name[50];

  while(1)
  {
    printf("\n1. for push");
    printf("\n2. for pop");
    printf("\n3. for display");
    printf("\n4. for top");
    printf("\n5. for compare");
    printf("\n6. for exit");

    printf("\nenter your choice :- ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("\nenter the name of the student :- ");
        scanf("%s", name);

         push(name);
         break;

      case 2:
        pop();
        break;

      case 3:
        display();
        break;

      case 4:
        topp();
        break;

     case 5:
        compare();
        break;

     case 6:
        exit(0);
        break;
    }
  }

  return 0;
}

void push(char name[])
{

  if (top == 2)
     printf("\nSTACK IS FULL");

  else
  {
    top++;
    strcpy(stack[top], name);
  }
}


void pop()
{
  char name[50];

  if (top == -1)
  {
    printf("\nSTACK IS EMPTY");
  }

  else
  {
    printf("\n%s", stack[top]);
    top--;
  }
}

void display()
{
  int val;
  for (val = top; val > -1; val--)
      printf("%s\t", stack[val]);
}

void topp()
{
  printf("\n%s", stack[top]);
}

void compare()
{
  int res;

  res = strcmp(stack[0], stack[1]);

  if (res == 0)
     printf("%s is equal than %s", stack[0], stack[1]);

  else
     printf("%s is not equal than %s", stack[0], stack[1]);

}
