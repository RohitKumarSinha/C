// write a program to create a linked list from an already given list. The new linked list must contain every alternate
// element of the existing linked list

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
struct node *make_node(struct node *start1, struct node *start2);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create first linked list\n");
    printf("2. for display entire first linked list\n");
    printf("3. for delete entire first linked list\n");
    printf("4. for create second linked list\n");
    printf("5. for display entire second linked list\n");
    printf("6. for delete entire second linked list\n");
    printf("7. for exit the program");

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
          start2 = make_node(start1, start2);
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

struct node *make_node(struct node *start1, struct node *start2)
{
  struct node *ptr = start1, *new_node;
  int num = 0;

  while (ptr->next != NULL)
  {
    ptr = ptr->next;
    num++;
  }

  while (num != -1)
  {

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data :- ");
    scanf("%d", &new_node->data);

    if (start2 == NULL)
    {
      start2 = new_node;
      new_node->next = NULL;
    }


    else
    {
      ptr = start2;
      while (ptr->next != NULL)
            ptr = ptr->next;

      ptr->next = new_node;
      new_node->next = NULL;

     }

     num--;
  }

  return (start2);
}
