// write a program to implement a priority queue
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  int priority;
  struct node *next;
};

struct node *start = NULL;
struct node *insert(struct node *);
struct node *delete(struct node *);
void display(struct node *);
int main()
{
  int option;
  do {
    printf("\n*****MAIN MENU*****");
    printf("\n1. INSERT");
    printf("\n2. DELETE");
    printf("\n3. DISPLAY");
    printf("\n4. EXIT");
    printf("\nEnter your option");
    scanf("%d", &option);

    switch (option) {
      case 1:
          start = insert(start);
          break;

      case 2:
          start = delete(start);
          break;

      case 3:
          display(start);
          break;

      case 4:
          exit(0);
    }
  } while(1);
}

struct node *insert(struct node *start)
{
  int val, pri;
  struct node *ptr, *p;
  ptr = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter the value and its priority :- ");
  scanf("%d %d", &val, &pri);

  ptr->data = val;
  ptr->priority = pri;

  if (start == NULL || pri < start->priority)
  {
    ptr->next = start;
    start = ptr;
  }

  else
  {
    p = start;
    while (p->next != NULL && p->next->priority <= pri)
          p = p->next;

    ptr->next = p->next;
    p->next = ptr;
  }

  return start;
}

struct node *delete(struct node *start)
{
  struct node *ptr;
  if (start == NULL)
  {
    printf("\nUNDERFLOW");
    return;
  }

  else
  {
    ptr = start;
    printf("\nDeleted item is : %d", ptr->data);
    start = start->next;
    free(ptr);
  }

  return (start);
}

void display(struct node *start)
{
  struct node *ptr;
  ptr = start;
  if (start == NULL)
      printf("\nQUEUE IS EMPTY");

  else
  {
    printf("\npriority queue is : ");
    while(ptr != NULL)
    {
      printf("\t%d[priority = %d]", ptr->data, ptr->priority);
      ptr = ptr->next;
    }
  }
}
