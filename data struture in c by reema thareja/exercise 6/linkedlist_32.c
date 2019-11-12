// write a program to move a middle node of a doubly link list to the top of the list


#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
  struct node *prev;
  int data;
  struct node *next;
};

struct node *start = NULL;

struct node *create_node(struct node *start);
struct node *display_node(struct node *start);
struct node *delete(struct node *start);
struct node *move_top(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. for moving the middle node into top of the list\n");
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
          start = move_top(start);
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
      new_node->prev = NULL;
      new_node->next = NULL;
    }

    else
    {
      ptr = start;
      while (ptr->next != NULL)
           ptr = ptr->next;

      ptr->next = new_node;
      new_node->prev = ptr;
      new_node->next = NULL;
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
  while (ptr != NULL)
  {
    printf("%d\t", ptr->data);
    ptr = ptr->next;
  }

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

  while (ptr != NULL)
  {
    next = ptr->next;
    free(ptr);
    ptr = next;
  }

  start = NULL;

  printf("\n\nYOUR LINKED LIST IS EMPTY");

  return (start);
}

struct node *move_top(struct node *start)
{
  struct node *ptr, *pre_ptr, *new_node;
  int count = 0, mat_count = 0;

  if (start == NULL)
  {
    printf("\n\nYOUR LINKED LIST IS EMPTY");
    return (start);
  }

  ptr = start;
  while (ptr != NULL)
  {
    count++;
    ptr = ptr->next;
  }

  count = count / 2;

  ptr = start;
  while (mat_count != count)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
    mat_count++;
  }

  new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = ptr->data;
  pre_ptr->next = ptr->next;
  free(ptr);

  new_node->next = start;
  start = new_node;

  return (start);
}
