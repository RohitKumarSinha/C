// write a program to interchange the kth and the (k + 1)th node of a circular doubly linked list

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
struct node *interchange(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. for interchange the nodes with his next node\n");
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
          start = interchange(start);
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
      new_node->next = new_node;
    }

    else
    {
      ptr = start;
      while (ptr->next != start)
           ptr = ptr->next;

      ptr->next = new_node;
      new_node->next = start;
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
  while(ptr != start);

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

struct node *interchange(struct node *display)
{
  struct node *ptr, *pre_ptr;
  int temp, pos, match_pos = 0, total_pos = 0;

  printf("\n\nenter the n postion number which you want to interchange with (n + 1) postion :- ");
  scanf("%d", &pos);

  ptr = start;

  do
  {
    total_pos++;
    ptr = ptr->next;
  }
  while (ptr != start);

  ptr = start;
  pre_ptr = ptr;

  while (pre_ptr != NULL)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
    if (match_pos == pos)
    {
      temp = ptr->data;
      ptr->data = pre_ptr->data;
      pre_ptr->data = temp;

      return (start);
    }

    match_pos++;

    if (total_pos < pos || pos < 0)
        break;
  }

  printf("\n\nyour input is invalid please enter one more time");
  return (start);
}
