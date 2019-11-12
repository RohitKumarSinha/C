// write a program to delete all nodes from a header linked list that has negative values in its data part

// write a program that prints whether the given liked list is sorted (in ascending order) or not

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
struct node *del_neg(int, struct node *start);
struct node *find_neg(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. delete the negative values in header linked list\n");
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
          start = find_neg(start);
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
  head_node->next = NULL;

  start = head_node;

  printf("\n\nhow many nodes you want to insert in linked list :- ");
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

struct node *find_neg(struct node *start)
{
  struct node *ptr = start;
  int count = 0;


  while (ptr != NULL)
  {
    if (ptr->data < 0)
    {
      ptr = del_neg(count, start);
    }

    ptr = ptr->next;
    count++;
  }
  return (start);
}

struct node *del_neg(int pos, struct node *start)
{

  struct node *ptr, *pre_ptr;
  int match_pos = 0;

  if (pos == 0)
  {
    ptr = start->next;
    head_node = ptr->next;
    free(ptr);
    return (start);
  }

  else
  {
    ptr = start->next;
    while (match_pos != pos)
    {
      pre_ptr = ptr;
      ptr = ptr->next;
    }

    pre_ptr->next = ptr->next;
    free(ptr);
  }

  return (start);
}
