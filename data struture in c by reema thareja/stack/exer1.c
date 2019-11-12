// write a program to implement a stack using a linked list

#include <stdio.h>
#include <malloc.h>

struct stack *push(int);
struct stack *pop(struct stack *top);
void display(struct stack *top);
struct stack *topp(struct stack *top);

struct stack
{
  int data;
  struct stack *next;
};

struct stack *top = NULL;

int main()
{
  int choice, val;

  while(1)
  {
    printf("\n1. for push");
    printf("\n2. for pop");
    printf("\n3. for display");
    printf("\n4. for top");
    printf("\n1. for exit");

    printf("\nenter your choice :- ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("\nenter a number :- ");
        scanf("%d", &val);

         top = push(val);
         break;

      case 2:
        top = pop(top);
        break;

      case 3:
        display(top);
        break;

      case 4:
        top = topp(top);
        printf("\n%d", top->data);
        break;

     case 5:
        exit(0);
        break;
    }
  }

  return 0;
}

struct stack *push(int val)
{
  struct stack *new_node;

  new_node = (struct stack *)malloc(sizeof(struct stack));

  new_node->data = val;
  if (top == NULL)
  {
    top = new_node;
    new_node->next = NULL;
  }

  else
  {
    new_node->next = top;
    top = new_node;
  }

  return (top);
}

struct stack *pop(struct stack *top)
{
  int val;

  if (top == NULL)
  {
    printf("\nSTACK IS EMPTY");
  }

  else
  {
    val = top->data;
    printf("\n%d", val);
    top = top->next;
    return (top);
  }
}

void display(struct stack *top)
{
  struct stack *ptr = top;
  while (ptr != NULL)
  {
    printf("%d\t", ptr->data);
    ptr = ptr->next;
  }

}

struct stack *topp(struct stack *top)
{
  return (top);
}
