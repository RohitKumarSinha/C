// write a program to merge two sorted linked lists. The resultant list must also be sorted

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
struct node *sort_list(struct node *start);
struct node *merge_list(struct node *start1, struct node *start2);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create first linked list\n");
    printf("2. for display first linked list\n");
    printf("3. for delete first linked list\n");
    printf("4. for create second linked list\n");
    printf("5. for display second linked list\n");
    printf("6. for delete second linked list\n");
    printf("7. for merge second linked list into first linked list");
    printf("8. for exit the program");

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
          start2 = create_node(start2);
          break;

     case 5:
          start2 = display_node(start2);
          break;

     case 6:
          start2 = delete(start2);
          break;

     case 7:
          start1 = merge_list(start1, start2);
          break;

     case 8:
         printf("\n\nyou are going to exit the program");
         start1 = sort_list(start1);

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

  printf("\n\nEnter how many nodes you want to create in linked list :- ");
  scanf("%d", &num);

  while (num != 0)
  {

    new_node = (struct node *)malloc(sizeof(struct node));

    printf("\nenter the data");
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

  start = sort_list(start);
  return(start);
}

struct node *display_node(struct node *start)
{
  struct node *ptr = start;

  if (start == NULL)
  {
    printf("\n\nyour linked list is empty");
    return (start);
  }

  printf("\n\nyour linked list is \n");

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
    printf("\n\nyour linked list is empty");
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

  start = NULL;
  printf("\n\nyour linked list is empty");
  return (start);
}

struct node *sort_list(struct node *start)
{
  struct node *ptr1, *ptr2;
  int temp;

  ptr1 = start;

  while (ptr1->next == NULL)
  {
    ptr2 = ptr1->next;
    while (ptr2 != NULL)
    {
      if (ptr1->data > ptr2->data)
      {
        temp = ptr1->data;
        ptr1->data = ptr2->data;
        ptr2->data = temp;
      }
      ptr2 = ptr2->next;
    }
    ptr1 = ptr1->next;
  }

  return (start);
}

struct node *merge_list(struct node *start1, struct node *start2)
{
  struct node *new_node, *ptr;

  if (start2 == NULL)
  {
    printf("\n\nlinked list can't be merge");
    return (start1);
  }

  while (start2 != NULL)
  {
  new_node = (struct node *)malloc(sizeof(struct node));

    ptr = start1;

    while (ptr->next != NULL)
          ptr = ptr->next;

    ptr->next = new_node;
    new_node->data = start2->data;
    new_node->next = NULL;

    start2 = start2->next;
  }

  start1 = sort_list(start1);
  return (start1);
}
