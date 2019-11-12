// write a program to sort the values stored in a doubly circular linked list

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
struct node *sort_list(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create doubly circular linked list\n");
    printf("2. for display doubly circular  linked list\n");
    printf("3. for delete entire doubly circular linked list\n");
    printf("4. for sort doubly circular linked list\n");
    printf("5. exit the program\n");

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
          start = sort_list(start);
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

  printf("\n\nhow many nodes you want to create :- ");
  scanf("%d", &num);

  while (num != 0)
  {

    new_node = (struct node *)malloc(sizeof(struct node));

    printf("\nenter the data :- ");
    scanf("%d", &new_node->data);

    if (start == NULL)
    {
      start = new_node;
      new_node->prev = new_node;
      new_node->next = new_node;
    }

    else
    {
      ptr = start;

      while (ptr->next != start)
            ptr = ptr->next;

      ptr->next = new_node;
      new_node->prev = ptr;
      new_node->next = start;
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

  ptr = start;

  printf("\n\nlinked list is \n");
  do {
    printf("%d\t", ptr->data);
    ptr = ptr->next;
  } while(ptr != start);

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

  ptr = start;

  do {
    next = ptr->next;
    free(ptr);
    ptr = next;
  } while(ptr != start);

  start = NULL;
  printf("\n\nlink list is empty");

  return (start);
}

struct node *sort_list(struct node *start)
{
  struct node *ptr1, *ptr2;
  int temp;

  ptr1 = start;

  while (ptr1->next != start)
  {
    ptr2 = ptr1->next;
    while (ptr2 != start)
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
