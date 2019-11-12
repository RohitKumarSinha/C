#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(char);
char pop();
int get_priority(char);

int top = -1;
char stack[100];

int main()
{
  int  i = 0, j = 0;
  char exp[100], target[100], val = ' ';
  printf("enter an infix operator :- ");
  gets(exp);

  strrev(exp);

  while (exp[i] != '\0')
  {
    if (exp[i] == '(')
    {
      push(exp[i]);
    }

    else if (exp[i] == ')')
    {
      while ((val = pop()) !=')')
      {
        target[j] = val;
        j++;
      }
    }

    else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '/' || exp[i] == '*')
    {
      while (get_priority(stack[top]) >= get_priority(exp[i]))
      {
        target[j] = pop();
        j++;
      }
      push(exp[i]);
    }

    else
    {
      target[j] = exp[i];
      j++;
    }

    i++;
  }

  while (top != -1)
  {
    target[j] = pop();
    j++;
  }
  target[j] = '\0';
  printf("\n%s", target);
  printf("\n%s", strrev(target));
}


void push(char val)
{
  top++;
  stack[top] = val;
}

char pop()
{
  char val = ' ';
  if (top == -1)
  {
    printf("\nlist is empty");
    exit(0);
  }

  else
  {
    val = stack[top];
    top--;
    return (val);
  }
}

int get_priority(char val)
{
  if (val == '+' || val == '-')
     return 1;

  else if (val == '*' || val == '/')
     return 2;

   else
    return 0;
}
