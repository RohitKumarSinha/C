// write a program to delete the first, last, and middle node of a header linked list

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;

};

struct node *head_node, *start = NULL;

struct node *create_node(struct node *start);
struct node *display_node(struct node *start);
struct node *delete(struct node *start);
struct node *delete_beg(struct node *start);
struct node *delete_end(struct node *start);
struct node *delete_mid(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create linked list\n");
    printf("2. for display entire linked list\n");
    printf("3. for delete entire linked list\n");
    printf("4. for delete beginning at the linked list\n");
    printf("5. for delete last at the linked list\n");
    printf("6. for delete middle at the linked list\n");
    printf("7. for exit the program");

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
          start = delete_mid(start);
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

  head_node = (struct node *)malloc(sizeof(struct node));
  head_node->data = 1;
  start = head_node;
  head_node->next = NULL;

  printf("\n\nHow many nodes you want to insert in head node :- ");
  scanf("%d", &num);

  while (num != 0)
  {

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data :- ");
    scanf("%d", &new_node->data);

    ptr = start;
    while (ptr->next != NULL)
          ptr = ptr->next;

    ptr->next = new_node;
    new_node->next = NULL;

    num--;
  }

  return (start);
}

struct node *display_node(struct node *start)
{
  struct node *ptr;
  ptr = start->next;

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

struct node *delete_beg(struct node *start)
{
  struct node *ptr;

  if (start == NULL)
  {
    printf("\n\nLinked list is empty");
    return (start);
  }

  else
  {
    ptr = start->next;
    head_node->next = ptr->next;
    free(ptr);
  }

  return (start);
}

struct node *delete_end(struct node *start)
{
  struct node *ptr, *pre_ptr;

  if (start == NULL)
  {
    printf("\n\nLinked list is empty");
    return (start);
  }

  else
  {
    ptr = start;

    while (ptr->next != NULL)
    {
      pre_ptr = ptr;
      ptr = ptr->next;
    }

    pre_ptr->next = NULL;
    free(ptr);
  }

  return (start);
}

struct node *delete_mid(struct node *start)
{
  struct node *ptr, *pre_ptr;
  int pos = 0, num = 0;

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
      ptr = ptr->next;
      num++;
    }

    num = num / 2;
    ptr = start;

    while (pos != num)
    {
      pre_ptr = ptr;
      ptr = ptr->next;
      pos++;
    }

    pre_ptr->next = ptr->next;
    free(ptr);
  }

  return (start);
}
