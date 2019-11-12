// write a program to implement a linked stack

#include <stdio.h>
#include <stdlib.h>

struct stack
{
  int data;
  struct stack *next;
};

struct stack *top = NULL;
struct stack *push(struct stack *top);
struct stack *pop(struct stack *top);
struct stack *peek(struct stack *top);
void display(struct stack *top);

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
      top = push(top);
      break;

      case 2:
      top = pop(top);
      break;

      case 3:
      display(top);
      break;

      case 4:
      top = peek(top);
      if (top == NULL)
      {
        printf("\nSTACK LINKED IS EMPTY");
      }

      else
      {
        printf("%d\n", top->data);
      }
      break;

      case 5:
      exit(0);
    }

  }
}


struct stack  *push(struct stack *top)
{

  struct stack *new_node;
  int val;

  new_node = (struct stack *)malloc(sizeof(struct stack));
  printf("\nenter the value :- ");
  scanf("%d", &val);

  if (top == NULL)
  {
    new_node->data = val;
    new_node->next = NULL;
    top = new_node;
  }

  else
  {
    new_node->data = val;
    new_node->next = top;
    top = new_node;
  }

  return (top);
}

struct stack *pop(struct stack *top)
{
  struct stack *ptr;

  if (top == NULL)
  {
    printf("\nLINKED LIST IS EMPTY");
    return (top);
  }

  else
  {
    ptr = top;
    printf("%d\n", ptr->data);
    top = top->next;
    free(ptr);
  }

  return (top);
}

void display(struct stack *top)
{
  if (top == NULL)
  {
    printf("\nLINKED STACK IS EMPTY");
  }

  else
  {
    while (top != NULL)
    {
      printf("%d\t", top->data);
      top = top->next;
    }
  }
}

struct stack *peek(struct stack *top)
{
  if (top == NULL)
  {
     return (top);
  }

  else
  {
    return (top);
  }
}
