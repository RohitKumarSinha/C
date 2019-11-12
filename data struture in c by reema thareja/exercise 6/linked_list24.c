// write a program to delete the kth node from a linked list

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
struct node *delete_pos(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. for delete specific position\n");
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
          start = delete_pos(start);
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
      new_node->next = NULL;
    }

    else
    {
      ptr = start;
      while (ptr->next != NULL)
           ptr = ptr->next;

      ptr->next = new_node;
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

struct node *delete_pos(struct node *start)
{
  struct node *ptr, *pre_ptr;
  int pos, match_pos = 0, total_pos = 0;

  printf("\n\nenter the position where you want to delete node ");
  printf("\nposition of the first node is 0");
  scanf("%d", &pos);

  if (start == NULL)
  {
    printf("\n\nlink list is EMPTY");
    return (start);
  }

  ptr = start;

  while (ptr->next != NULL)
  {
    total_pos++;
    ptr = ptr->next;
  }

  if (total_pos < pos)
  {
    printf("\n\nyour input is wrong try  one more time ");
    return (start);
  }

  if (pos == 0)
  {
    ptr = start;
    start = start->next;
    free(ptr);

    return (start);
  }

  ptr = start;
  while (pos != match_pos)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
    match_pos++;
  }

  if (ptr->next == NULL)
  {
    pre_ptr->next = NULL;
    free(ptr);

    return (start);
  }

  pre_ptr->next = ptr->next;
  free(ptr);

  return (start);
}
