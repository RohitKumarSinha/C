// write a program to convert the expression "a + b" into "+ab"


#include <stdio.h>
#include <string.h>

void push(char);
char pop();

int top = -1;
char stack[10];

int main()
{
  char exp[10], tar[10];
  int i = 0, j = 0;
  printf("enter the expression :- ");
  gets(exp);

  strrev(exp);

  while (exp[i] != '\0')
  {
    if (exp[i] == '+')
    {
      push(exp[i]);
    }

    else
    {
      tar[j] = exp[i];
      j++;
    }

    i++;
  }

  while (top != -1)
  {
    tar[j] = pop();
    j++;
  }

  tar[j] = '\0';

  strrev(tar);
  printf("\n%s", tar);

  return 0;
}

void push(char val)
{
  top++;
  stack[top] = val;
}

char pop()
{
  if (top == -1)
  {
    printf("\nSTACK IS EMPTY");
  }

  else
  {
    return(stack[top--]);
  }
}
