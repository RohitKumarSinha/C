// write a program to delete a node from a circular header linked list


#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start = NULL;
struct node *head_node;

struct node *create_node(struct node *start);
struct node *display_node(struct node *start);
struct node *delete(struct node *start);
struct node *del_spec(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. delete a node in circular header linked list\n");
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
          start = del_spec(start);
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

  head_node = (struct node *)malloc(sizeof(struct node));
  head_node->data = 1;
  start = head_node;
  head_node->next = head_node;


  printf("\n\nhow many nodes you want to insert in linked list :- ");
  scanf("%d", &num);

  while (num != 0)
  {
    new_node = (struct node *)malloc(sizeof(struct node));

    printf("\nenter the data :- ");
    scanf("%d", &new_node->data);

      ptr = start;
      while (ptr->next != start)
           ptr = ptr->next;

      ptr->next = new_node;
      new_node->next = start;

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

  ptr = start->next;

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

struct node *del_spec(struct node *start)
{
  struct node *ptr, *pre_ptr;
  int pos, match_pos = 0;

  ptr = start->next;

  printf("\n\nenter the position where you want to delete node :- ");
  scanf("%d", &pos);

  if (pos == 0)
  {
     head_node->next = ptr->next;
     free(ptr);
     return (start);
  }

  pre_ptr = ptr;
  while (ptr != start)
  {
    if (match_pos == pos)
        break;

    pre_ptr = ptr;
    ptr = ptr->next;
    match_pos++;
  }

  pre_ptr->next= ptr->next;
  free(ptr);

  return (start);
}
