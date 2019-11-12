// c program to check if expression is correctly parenthesized

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
char stack[100];

// function prototypes
void push(char);
char pop();
void find_top();

void main()
{
  int i;
  char a[100], val = ' ';
  printf("enter expression : \n");
  scanf("%s", &a);

  for (i = 0; a[i] != '\0'; i++)
  {
    if (a[i] == '(' || a[i] == '[' || a[i] == '{')
    {
      push(a[i]);
    }

    else if (a[i] == ')' || a[i] == ']' || a[i] == '}')
    {
      val = pop();

      if ((a[i] == ')') && (val == '{' || val == '['))
      {
        printf("\ninvalid expression");
        exit(0);
      }

      if ((a[i] == ']') && (val == '(' || val == '{'))
      {
        printf("\ninvalid expression");
        exit(0);
      }

      if ((a[i] == '}') && (val == '(' || val == '['))
      {
        printf("\ninvalid expression");
        exit(0);
      }
    }
  }

  find_top();
}

// to push element in stack

void push(char a)
{
  top++;
  stack[top] = a;
}

char pop()
{
  char val = ' ';
  if (top == -1)
  {
    printf("expression is invalid...\n");
    exit(0);
  }

  else
  {
    val = stack[top];
    top--;
    return (val);
  }
}

// to find top element of stack
void find_top()
{
  if (top == -1)
     printf("\nexpression is valid");

  else
     printf("\nexpression is invalid");
}
