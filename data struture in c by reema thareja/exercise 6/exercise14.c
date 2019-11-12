/* write a program to

(a) delete the first occurrence of a given character in a linked list
(b) delete the last occurrence of a given character
(c) delete all the occurrence of a given character */

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
  char ch;
  struct node *next;
};

struct node *start = NULL;

struct node *create_node(struct node *start);
struct node *display_node(struct node *start);
struct node *delete(struct node *start);
struct node *delete_beg(struct node *start);
struct node *delete_end(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. delete the entire node from the list\n");
    printf("4. delete at the beginning of the link list\n");
    printf("5. delete at the end of the link list\n");
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
         start = delete_beg(start);
         break;

    case 5:
         start = delete_end(start);
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

    fflush(stdin);
    printf("\nenter the data :- ");
    scanf("%c", &new_node->ch);

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
    printf("%c\t", ptr->ch);
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


struct node *delete_beg(struct node *start)
{
  struct node *ptr;

  ptr = start;
  start = start->next;
  free(ptr);

  return(start);
}

struct node *delete_end(struct node *start)
{
  struct node *ptr, *pre_ptr;

  ptr = start;

  while (ptr->next != NULL)
    {
      pre_ptr = ptr;
      ptr = ptr->next;
    }

    pre_ptr->next = NULL;
    free(ptr);

   return (start);
}
