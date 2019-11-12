#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start = NULL;

struct node *create_node(struct node *);
struct node *create_first(struct node *);
struct node *insert_after(struct node *);
struct node *insert_before(struct node *);
struct node *create_end(struct node *);
struct node  *display_node(struct node *);
struct node *delete_node(struct node *);
struct node *delete_fist(struct node *);
struct node *delete_end(struct node *);
struct node *delete_spec_node(struct node *);
struct node *sort_list(struct node *);

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
        start = create_first(start);
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
       start = delete_fist(start);
       break;

   case 7:
       start = delete_end(start);
       break;

   case 8:
      start = delete_spec_node(start);
      break;

   case 9:
      start = delete_node(start);
      break;

  case 10:
      start = display_node(start);
      break;

  case 11:
       start = sort_list(start);
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
  int num;
  struct node *new_node, *ptr;

  printf("\n\nenter how many data you want to enter :- ");
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

struct node *create_first(struct node *start)
{
  struct node *ptr, *new_node;

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  new_node->next = start;
  start = new_node;

  return (start);
}

struct node *create_end(struct node *start)
{
  struct node *new_node, *ptr = start;

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  while(ptr->next != NULL)
       ptr = ptr->next;

    ptr->next = new_node;
    new_node->next = NULL;

    return (start);
}


struct node *insert_after(struct node *start)
{
  struct node *pre_ptr, *ptr, *new_node;
  int num;

  printf("\n\nenter the number you want to insert after :- ");
  scanf("%d", &num);

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\nenter the new data you want to insert :- ");
  scanf("%d", &new_node->data);

  ptr = start;
  pre_ptr = ptr;

  while (pre_ptr->data != num)
  {
     pre_ptr = ptr;
     ptr = ptr->next;
  }

  pre_ptr->next = new_node;
  new_node->next = ptr;

  return (start);
}

struct node *insert_before(struct node *start)
{
  int num;
  struct node *ptr, *pre_ptr, *new_node;

  printf("\n\nenter the number you want to insert before :- ");
  scanf("%d", &num);

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\nenter the data you want to insert :- ");
  scanf("%d", &new_node->data);

  ptr = start;

  while (ptr->data != num)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
  }

  pre_ptr->next = new_node;
  new_node->next = ptr;

  return (start);
}

struct node *delete_fist(struct node *start)
{
  struct node *ptr = start;

  start = ptr->next;
  free(ptr);

  return (start);
}

struct node *delete_end(struct node *start)
{
  struct node *pre_ptr, *ptr = start;

  while (ptr->next != NULL)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
  }

  free(ptr);
  pre_ptr->next = NULL;

   return (start);
}

struct node *delete_spec_node(struct node *start)
{
  struct node *ptr, *pre_ptr;
  int  val;

  printf("\n\nenter which number you want to delete in node :- ");
  scanf("%d", &val);

  ptr = start;

  while (ptr->data != val)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
  }

  pre_ptr->next = ptr->next;

  free(ptr);

  return (start);
}


struct node *delete_node(struct node *start)
{
  struct node *next, *ptr;

  ptr = start;

  while (ptr != NULL)
  {
    next = ptr->next;
    free(ptr);
    ptr = next;
  }

  start = NULL;

  printf("\nYOUR LINKED LIST IS EMPTY");

  return (start);
}

struct node *display_node(struct node *start)
{
  struct node *ptr = start;

  printf("\n\nYOUR LINKED LIST ARE :- \n");
  while (ptr != NULL)
  {
    printf("%d\t", ptr->data);
    ptr = ptr->next;
  }

  return (start);
}

struct node *sort_list(struct node *start)
{
   struct node *ptr1, *ptr2;
   int temp;

   ptr1 = start;

   while (ptr1 ->next != NULL)
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
