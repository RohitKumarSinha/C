// write a program to delete the first element of a doubly linked list. Add this node as the last node node of the list

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
struct node *del_beg_ins_last(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create doubly linked list\n");
    printf("2. for display entire doubly linked list\n");
    printf("3. for delete first doubly linked list\n");
    printf("4. for delete beginnig in the doubly linked list and insert at last\n");
    printf("5. for exit the program");

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
          start = delete(start);
          break;

     case 4:
          start = del_beg_ins_last(start);
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

  printf("\n\nHow many nodes you want to insert in head node :- ");
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

  return (start);
}

struct node *display_node(struct node *start)
{
  struct node *ptr;
  ptr = start;

  if (start == NULL)
  {
    printf("\n\nLinked list is empty");
    return (start);
  }

  else
   {
     printf("\n\nLinked list is \n");
     while (ptr != NULL)
      {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
      }
   }

  return (start);
}

struct node *delete(struct node *start)
{
  struct node *ptr, *next;

  if (start == NULL)
  {
    printf("\n\nLinked list is empty");
    return (start);
  }

  else
  {
    ptr = start;
    while (ptr != NULL)
    {
      next = ptr->next;
      free(ptr);
      ptr = next;
    }
  }

  printf("\n\nLinked list is empty");
  start = NULL;

  return (start);
}

struct node *del_beg_ins_last(struct node *start)
{
  struct node *new_node, *ptr;

  if (start == NULL)
  {
    printf("\n\nLinked list is empty");
    return (start);
  }

  else
  {
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = start->data;
    ptr = start;

    while (ptr->next != NULL)
          ptr = ptr->next;

    ptr->next = new_node;
    new_node->prev = ptr;
    new_node->next = NULL;

    ptr = start;

    start = start->next;
    start->prev = NULL;
    free(ptr);
  }

  return (start);
}
