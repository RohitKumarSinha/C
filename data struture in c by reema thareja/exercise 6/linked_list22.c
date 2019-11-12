// write a program that adds 10 to the values stored in the nodes of a doubly linked list
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
struct node *add_ten(struct node *start);


int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. for add 10 in each node of the linked list\n");
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
          start = add_ten(start);
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
  struct node *ptr, *new_node;
  int num;

  printf("\n\nhow many nodes you want to insert in doubly linked list :- ");
  scanf("%d", &num);

  while (num != 0)
  {

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data :- ");
    scanf("%d", &new_node->data);

    if (start == NULL)
    {
      new_node->prev = NULL;
      new_node->next = NULL;
      start = new_node;
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

  if (start == NULL)
  {
    printf("\n\nlinked list is empty");
    return (start);
  }

  else
  {
    ptr = start;

    printf("\n\nlinked list is :\n");
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
    printf("\n\nlinked list is empty");
    return (start);
  }

  else
  {
    ptr = start;
    while (ptr->next != NULL)
    {
      next = ptr->next;
      free(ptr);
      ptr = next;
    }
  }

  free(ptr);
  start = NULL;
  printf("linked list is empty");

  return (start);
}

struct node *add_ten(struct node *start)
{
  struct node *ptr, *pre_ptr;

  if (start == NULL)
  {
    printf("\n\nlinked list is empty");
    return (start);
  }

  else
  {
    ptr = start;
    pre_ptr = ptr;
    while (pre_ptr->next != NULL)
    {
      ptr->data = ptr->data + 10;
      pre_ptr = ptr;
      ptr = ptr->next;
    }
  }

  return (start);
}
