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
struct node *merge_list(struct node *, struct node *);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create first linked list\n");
    printf("2. for display first linked list\n");
    printf("3. for delete first linked list\n");
    printf("4. for create second linked list\n");
    printf("5. for display second linked list\n");
    printf("6. for delete entire second linked list\n");
    printf("7. for merge the first and second linked list in first linked list\n");
    printf("8. exit the program\n");

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
  do
  {
    printf("%d\t", ptr->data);
    ptr = ptr->next;
  }
  while (ptr != NULL);

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
  while (ptr != NULL);

  start = NULL;

  printf("\n\nYOUR LINKED LIST IS EMPTY");

  return (start);
}

struct node *merge_list(struct node *start1, struct node *start2)
{
  struct node *new_node, *ptr1 = start1, *ptr2 = start2;

  if (start1 == NULL)
  {
    printf("\n\nLINKED LIST CAN'T BE COPIED BECAUSE COPIED LINKED LIST IS EMPTY");
  }

   while (ptr2 != NULL)
   {
     while (ptr1->next != NULL)
           ptr1 = ptr1->next;

     new_node = (struct node *)malloc(sizeof(struct node));

      ptr1->next = new_node;
      new_node->data = ptr2->data;
      new_node->next = NULL;

      ptr2 = ptr2->next;
   }

  return(start1);
}
