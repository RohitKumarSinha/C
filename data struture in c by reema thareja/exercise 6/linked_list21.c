// write a program to count the number of occurrences of a given value in a linked list

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
struct node *no_of_occurrences(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. find the number of occurrences of a given value\n");
    printf("4. delete the entire linked list\n");
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
          start = no_of_occurrences(start);
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

struct node *no_of_occurrences(struct node *start)
{
  struct node *ptr;
  int val, count = 1, num = 1;

  if (start == NULL)
  {
    printf("\n\nlinked list is empty");
    return (start);
  }

  printf("\n\nenter which value you want to search in your linked list :- ");
  scanf("%d", &val);

  ptr = start;
  while (ptr->next != NULL)
  {
    ptr = ptr->next;
    num++;
  }

  ptr = start;
  while (ptr->data != val)
  {
    ptr = ptr->next;
    count++;

    if (num == count)
       break;
  }

  if (ptr->data != val)
     printf("\n\nyour number doesn't in the list");

  else
    printf("\n\nyour number position is %d", count);

    return (start);
}
