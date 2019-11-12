// write a program to count the number of non-zero values in circular linked  list

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start = NULL;

struct node *create_node(struct node *start);
struct node *display_node(struct node *start);
struct node *delete(struct node *start);
void count_nonzero(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. for count number of non zero in circular linked list\n");
    printf("4. delete the entire node from the list\n");
    printf("5. exit from the program\n");

    printf("\nEnter the choice :- ");
    scanf("%d", &choice);

    switch (choice)
    {
      case 1:
         start = create_node(start);
         break;

      case 2:
          start = display_node(start);
          break;

      case 3:
          count_nonzero(start);
          break;

     case 4:
          start = delete(start);
          break;

     case 5:
         printf("\n\nyou are going to exit the program");
         exit(0);

    default:
        printf("\n\nInvalid input");
    }
  } while(1);
  return 0;
}

struct node *create_node(struct node *start)
{
  struct node *new_node, *ptr;
  int num;

  printf("\n\nhow many nodes you want to insert in linked list :- ");
  scanf("%d", &num);

  while (num != 0)
  {
    new_node = (struct node *)malloc(sizeof(struct node));

    printf("\nenter the data :- ");
    scanf("%d", &new_node->data);

    if (start == NULL)
    {
      start = new_node;
      new_node->next = new_node;
    }

    else
    {
      ptr = start;
      while (ptr->next != start)
           ptr = ptr->next;

      ptr->next = new_node;
      new_node->next = start;
    }
    num--;
  }

  return(start);
}


struct node *display_node(struct node *start)
{
  struct node *ptr;

  if (start == NULL)
  {
    printf("\n\nYOUR LINKED LIST IS EMPTY");
    return (start);
  }

  ptr = start;

  printf("\n\nYOUR LINKED LIST IS \n");
  do
  {
    printf("%d\t", ptr->data);
    ptr = ptr->next;
  }
  while (ptr != start);

  return (start);
}

struct node *delete(struct node *start)
{
  struct node *ptr, *next;

  if (start == NULL)
  {
    printf("\n\nYOUR LINKED LIST IS EMPTY");
    return (start);
  }

  ptr = start;

  do
  {
    next = ptr->next;
    free(ptr);
    ptr = next;
  }
  while (ptr != start);

  start = NULL;

  printf("\n\nYOUR LINKED LIST IS EMPTY");

  return (start);
}

void count_nonzero(struct node *start)
{
  struct node *ptr;
  int nonzero = 0;

  if (start == NULL)
  {
    printf("\n\nlinked list is empty");
    return;
  }

  else
  {
    ptr = start;
    do
    {
      if (ptr->data != 0)
          nonzero++;

      ptr = ptr->next;
    }
    while (ptr != start);

    printf("\n\ntotal non zero number in your linked list is %d", nonzero);
  }
}
