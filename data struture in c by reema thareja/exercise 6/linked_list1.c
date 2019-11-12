// write a program that removes all nodes that have duplicate information

#include <stdio.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start = NULL;

struct node *create_node(struct node *start);
struct node *display_node(struct node *start);
struct node *delete(struct node *start);
struct node *remove_dup(struct node *start);


int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. for remove duplicate node from the list\n");
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
          start = remove_dup(start);
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
  int num;
  struct node *new_node, *ptr;

  printf("\n\nHow many nodes you want to create :- ");
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
  struct node *ptr = start;

  if (start == NULL)
  {
    printf("\n\nLINKED LIST IS EMPTY");
  }

  else
  {

    printf("\n\nYOUR LINKED LIST IS \n");

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

  ptr = start;

  if (start == NULL)
  {
    printf("\n\nLINKED LIST IS EMPTY");
  }

  else
  {
    while (ptr != NULL)
    {
      next = ptr->next;
      free(ptr);
      ptr = next;
    }

    start = NULL;
  }

  return (start);
}

struct node *remove_dup(struct node *start)
{

  struct node *ptr1, *ptr2, *pre_ptr, *temp;

  printf("stage 1\n");
  ptr1 = start;

  while (ptr1->next != NULL)
  {
    ptr2 = ptr1->next;
    while (ptr2 != NULL)
    {
      printf("stage 3\n");
      if (ptr1->data == ptr2->data)
      {
        printf("4\n");
        temp = ptr2;
        pre_ptr->next = ptr2->next;
        free(temp);
        printf("5\n");
      }

      pre_ptr = ptr2;
      ptr2 = ptr2->next;
      printf("6\n");
    }
    printf("7\n");
    ptr1 = ptr1->next;
  }
   printf("8\n");
  return (start);
}
