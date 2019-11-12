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
struct node *insert_after(struct node *start);
struct node *insert_before(struct node *start);
struct node *create_beg(struct node *start);
struct node *create_end(struct node *start);
struct node *delete_node(struct node *start);
struct node *delete_beg(struct node *start);
struct node *delete_end(struct node *start);
struct node *sort(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\nHere the following menu for linked list :\n\n");
    printf("1. create node\n");
    printf("2. create node at the beginning\n");
    printf("3. create node at the end\n");
    printf("4. create node after a given postion\n");
    printf("5. create node before a given postion\n");
    printf("6. delete node at the beginning\n");
    printf("7. delete node at the end\n");
    printf("8. delete node at specific postion\n");
    printf("9. delete entire node \n");
    printf("10. display linked list \n");
    printf("11. sort the linked list \n");
    printf("12. exit the program\n\n");

    printf("so what your choice :- ");
    scanf("%d", &choice);

    switch (choice) {

      case 1:
        start = create_node(start);
        break;

      case 2:
        start = create_beg(start);
        break;

     case 3:
        start = create_end(start);
        break;

     case 4:
        start = insert_after(start);
        break;

     case 5:
       start = insert_before(start);
       break;

    case 6:
       start = delete_beg(start);
       break;

   case 7:
       start = delete_end(start);
       break;

   case 8:
      start = delete_node(start);
      break;

   case 9:
      start = delete(start);
      break;

  case 10:
      start = display_node(start);
      break;

  case 11:
       start = sort(start);
       break;

  case 12:
      printf("\nyour are going to exit the program");
      exit(0);
      break;

  default:
     printf("\nInvalid input");
    }
  } while(1);

  return 0;
}

struct node *create_node(struct node *start)
{
  struct node *ptr, *new_node;
  int num;

  printf("\n\nenter how many number you want to insert in the node :- ");
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

  printf("\nHERE IS YOUR LINKED LIST :\n\n");

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

  ptr = start;

  while (ptr->next != NULL)
  {
    next = ptr->next;
    free(ptr);
    ptr = next;
  }

  start = NULL;

  printf("\n\nYOUR LINKED LIST IS EMPTY");
  return(start);
}

struct node *insert_after(struct node *start)
{
  struct node *ptr, *pre_ptr, *new_node;
  int val;

  printf("\n\nenter the number after which you want to insert your number :- ");
  scanf("%d", &val);

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\nenter the data :- ");
  scanf("%d", &new_node->data);

  ptr = start;
  pre_ptr = ptr;

  while (pre_ptr->data != val)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
  }

  if (pre_ptr == NULL)
  {
    pre_ptr->next = new_node;
    new_node->next = NULL;

    return (start);
  }


  if (pre_ptr == ptr)
  {
    ptr = pre_ptr->next;
    pre_ptr->next = new_node;
    new_node->next = ptr;

    return (start);
  }

    pre_ptr->next = new_node;
    new_node->next = ptr;

    return (start);
}


struct node *insert_before(struct node *start)
{
  struct node *ptr, *pre_ptr, *new_node;
  int val;

  printf("\n\nenter the number which you want to insert before your number :- ");
  scanf("%d", &val);

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\nenter the data :- ");
  scanf("%d", &new_node->data);

  ptr = start;
  pre_ptr = ptr;

   while (ptr->data != val)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
  }

  if (ptr == start)
  {
    new_node->next = start;
    start = new_node;

    return (start);
  }

  pre_ptr->next = new_node;
  new_node->next = ptr;

  return (start);

}

struct node *create_beg(struct node *start)
{
  struct node *new_node;

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  new_node->next = start;
  start = new_node;

  return (start);
}

struct node *create_end(struct node *start)
{
  struct node *ptr = start, *new_node;

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  while (ptr->next != NULL)
        ptr = ptr->next;

   ptr->next = new_node;
   new_node->next = NULL;

   return (start);
}

struct node *delete_node(struct node *start)
{
  struct node *ptr, *pre_ptr;
  int val;

  printf("\n\nenter the value you want to delete in the node :- ");
  scanf("%d", &val);

  ptr = start;

  while (ptr->data != val)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
  }

  if (ptr == start)
  {
    ptr = start;
    start = start->next;
    free(ptr);

    return (start);
  }

  if (ptr == NULL)
  {
    pre_ptr->next = NULL;
    free(ptr);

    return (start);
  }

  pre_ptr->next = ptr->next;
  free(ptr);

  return (start);
}

struct node *delete_beg(struct node *start)
{
  struct node *ptr;

  ptr = start;

  start = start->next;
  free(ptr);

  return (start);
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

struct node *sort(struct node *start)
{
  struct node *ptr1, *ptr2;
  int temp;

  ptr1 = start;

  while (ptr1->next != NULL)
  {
    ptr2 = ptr1->next;
    while (ptr2 != NULL)
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
