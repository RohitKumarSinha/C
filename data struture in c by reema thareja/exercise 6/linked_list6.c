// write a program to merge two linked list

// write a program that copies a circular linked list

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start1 = NULL;
struct node *start2 = NULL;

struct node *create_node(struct node *start);
struct node *display_node(struct node *start);
struct node *delete(struct node *start);
struct node *copy_node(struct node *, struct node *);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node of circular linked list\n");
    printf("2. for display node of circular linked list\n");
    printf("3. for delete entire circular linked list\n");
    printf("4. for make copy circular linked list\n");
    printf("5. for display copy circular linked list\n");
    printf("6. for delete entire copy linked list\n");
    printf("7. exit the program\n");

    printf("\nEnter the choice :- ");
    scanf("%d", &choice);

    switch (choice)
    {
      case 1:
         start1 = create_node(start1);
         break;

      case 2:
          start1 = display_node(start1);
          break;

      case 3:
          start1 = delete(start1);
          break;

     case 4:
          start2 = copy_node(start1, start2);
          break;

     case 5:
          start2 = display_node(start2);
          break;

      case 6:
           start2 = delete(start2);
           break;

     case 7:
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

struct node *copy_node(struct node *start1, struct node *start2)
{
  struct node *new_node, *ptr1 = start1, *ptr2;

  if (start1 == NULL)
  {
    printf("\n\nLINKED LIST CAN'T BE COPIED BECAUSE COPIED LINKED LIST IS EMPTY");
  }

  new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = ptr1->data;

  start2 = new_node;
  new_node->next = new_node;

  while (ptr1->next != start1)
  {

    new_node = (struct node *)malloc(sizeof(struct node));
    ptr2 = start2;

    while (ptr2->next != start2)
          ptr2 = ptr2->next;

    ptr2->next = new_node;
    new_node->next = start2;

    ptr1 = ptr1->next;
    new_node->data = ptr1->data;

  }
  return(start2);
}
