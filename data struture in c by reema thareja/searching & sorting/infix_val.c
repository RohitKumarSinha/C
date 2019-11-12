#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int top = -1;
int stack[100];

void push(int);
int pop();

int main()
{
  int val1, val2, val3;
  int i = 0;
  char exp[100];

  printf("enter the postfix expression \n");
  gets(exp);

  while (exp[i] != '\0')
  {
    if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
    {
      switch (exp[i]) {
        case '+':
        val1 = pop();
        val2 = pop();
        push(val1 + val2);
        break;

        case '-':
        val1 = pop();
        val2 = pop();
        push(val2 - val1);
        break;

        case '*':
        val1 = pop();
        val2 = pop();
        push(val2 * val1);
        break;


        case '/':
        val1 = pop();
        val2 = pop();
        push(val2 / val1);
        break;
      }
    }

    if (isdigit(exp[i]))
    {

      push(exp[i] - '0');
    }

    i++;
  }

  while(top != -1)
  printf("\nyour result is %d", pop());
  return 0;
}

void push(int val)
{
  top++;
  stack[top] = val;
}

int pop()
{
  int val;
  if (top == -1)
  {
    printf("list is empty");
    exit(0);
  }

  else
  {
    val = stack[top];
    top--;
    return val;
  }
}
