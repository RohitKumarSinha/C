// write a program that prints maximum and minimum values in a linked list that stores integer values

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
struct node *find_max(struct node *start);
struct node *find_min(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. delete the entire node from the list\n");
    printf("4. to find maximum value in your linked list\n");
    printf("5. to find minimum value in your linked list\n");
    printf("6. exit from the program\n");

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
          start = find_max(start);
          break;

     case 5:
          start = find_min(start);
          break;

     case 6:
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

struct node *find_max(struct node *start)
{
  struct node *ptr, *pre_ptr;
  int max;

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
      pre_ptr = ptr;
      ptr = ptr->next;

      if (ptr->data > pre_ptr->data)
          max = ptr->data;
    }
  }

  printf("\n\nmaximum value in your linked list is %d", max);

  return (start);
}

struct node *find_min(struct node *start)
{
  struct node *ptr, *pre_ptr;
  int min = 0;

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
      pre_ptr = ptr;  // 1
      ptr = ptr->next; // 2

      if (ptr->data > pre_ptr->data)  3 > 2
      {
        min = pre_ptr->data; 2
        if (min > pre_ptr->data) 1 > 2
            min = pre_ptr->data;
      }
    }
  }

  printf("\n\nminimum value in your linked list is %d", min);

  return (start);
}
