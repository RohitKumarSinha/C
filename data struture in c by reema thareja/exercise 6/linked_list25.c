// write a program to perform deletions in all the cases of a circular header linked list

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
struct node *del_beg(struct node *start);
struct node *del_end(struct node *start);
struct node *delete_after(struct node *start);
struct node *delete_before(struct node *start);
struct node *delete_pos(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. delete the entire node from the list\n");
    printf("4. delete at the beginnig of the node\n");
    printf("5. delete at the end of the node\n");
    printf("6. delete the node after a node position\n");
    printf("7. delete the node before a node position\n");
    printf("8. delete the node at specific position\n");
    printf("9. exit from the program\n");

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
           start = del_beg(start);
           break;

      case 5:
          start = del_end(start);
          break;

     case 6:
          start = delete_after(start);
          break;

     case 7:
          start = delete_before(start);
          break;

     case 8:
         start = delete_pos(start);
         break;

     case 9:
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
      while (ptr->next != head_node)
           ptr = ptr->next;

      ptr->next = new_node;
      new_node->next = head_node;

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
  while (ptr != head_node)
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

  while (ptr != head_node)
  {
    next = ptr->next;
    free(ptr);
    ptr = next;
  }

  start = NULL;

  printf("\n\nYOUR LINKED LIST IS EMPTY");

  return (start);
}

struct node *del_beg(struct node *start)
{
  struct node *ptr;

  ptr = start->next;
  head_node = ptr->next;
  free(ptr);

  return (start);
}

struct node *del_end(struct node *start)
{
  struct node *ptr, *pre_ptr;

  ptr = start->next;
  while (ptr->next != head_node)
  {
     pre_ptr = ptr;
     ptr = ptr->next;
  }

  pre_ptr->next = head_node;
  free(ptr);

  return (start);
}

struct node *delete_before(struct node *start)
{
  struct node *ptr, *pre_ptr;
  int num;

  if (start == NULL)
  {
    printf("\n\nlinked list is empty ");
    return (start);
  }

  printf("enter before which number you want to delete node :- ");
  scanf("%d", &num);

  if (num == 0)
  {
    printf("\n\nwrong input !!! please enter a valid position");
    return (start);
  }

  if (num == 1)
  {
    start = del_beg(start);
    return (start);
  }

  ptr = start;
  pre_ptr = ptr;

  while (pre_ptr->data != num && pre_ptr->next != NULL)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
  }

  if (pre_ptr->next != NULL)
  {
    start = del_end(start);
    return (start);
  }

  if (pre_ptr->data != num)
  {
    printf("\n\nyour input is wrong");
    return (start);
  }

  pre_ptr->next = ptr->next;
  free(ptr);

  return (start);
}


struct node *delete_after(struct node *start)
{
  struct node *ptr, *pre_ptr;
  int num;

  if (start == NULL)
  {
    printf("\n\nlinked list is empty ");
    return (start);
  }

  printf("enter after which number you want to delete node :- ");
  scanf("%d", &num);

  if (pos == 1)
  {
    start = del_beg(start);
    return (start);
  }

  ptr = start;
  pre_ptr = ptr;

  while (pre_ptr->data != num && pre_ptr->next != NULL)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
  }

  if (pre_ptr->next != NULL)
  {
    start = del_end(start);
    return (start);
  }

  if (pre_ptr->data != num)
  {
    printf("\n\nyour input is wrong");
    return (start);
  }

  pre_ptr->next = ptr->next;
  free(ptr);

  return (start);
}
