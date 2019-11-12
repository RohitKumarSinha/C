#include <stdio.h>
#include <malloc.h>

struct node
{
  struct node *prev;
  int data;
  struct node *next;
};

struct node *start = NULL;
struct node *create_node(struct node *start);
struct node *create_beg(struct node *start);
struct node *create_end(struct node *start);
struct node *delete(struct node *start);
struct node *delete_beg(struct node *start);
struct node *delete_end(struct node *start);
struct node *insert_position(struct node *start);
struct node *delete_position(struct node *start);
struct node *display_node(struct node *start);
struct node *sort_list(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\nHere the following menu for linked list :\n\n");
    printf("1. create node\n");
    printf("2. create node at the beginning\n");
    printf("3. create node at the end\n");
    printf("4. create node a given postion\n");
    printf("5. delete node at the beginning\n");
    printf("6. delete node at the end\n");
    printf("7. delete node at specific postion\n");
    printf("8. delete entire node \n");
    printf("9. display linked list \n");
    printf("10. sort the linked list \n");
    printf("11. exit the program\n\n");

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
        start = insert_position(start);
        break;

     case 5:
       start = delete_beg(start);
       break;

    case 6:
       start = delete_end(start);
       break;

   case 7:
       start = delete_position(start);
       break;

   case 8:
      start = delete(start);
      break;

   case 9:
      start = display_node(start);
      break;

  case 10:
      start = sort_list(start);
      break;

  case 11:
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
  struct node *new_node, *ptr;
  int num;

  printf("\n\nEnter how many node you want to insert in linked list :- ");
  scanf("%d", &num);

  while (num != 0)
  {
    new_node = (struct node *)malloc(sizeof(struct node));

    printf("\nenter the data :- ");
    scanf("%d", &new_node->data);

    if (start == NULL)
    {
      new_node->next = NULL;
      new_node->prev = NULL;
      start = new_node;
    }

    else
    {
      ptr = start;

      while (ptr->next != NULL)
           ptr = ptr->next;

      ptr->next = new_node;
      new_node->prev = ptr;
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

  if (start == NULL)
  {
    printf("\n\nYOUR LINKED LIST IS EMPTY");
  }

  printf("\n\nHERE IS YOUR LINKED LIST :\n");

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

  printf("\n\nYOUR LINKED LIST IS EMPTY \n");
  return (start);
}

struct node *create_beg(struct node *start)
{
  struct node *new_node;

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  new_node->next = start;
  new_node->prev = NULL;
  start->prev = new_node;
  start = new_node;

  return (start);
}

struct node *create_end(struct node *start)
{
  struct node *ptr, *new_node;

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  ptr = start;

  while (ptr->next != NULL)
  {
    ptr = ptr->next;
  }

  ptr->next = new_node;
  new_node->prev = ptr;
  new_node->next = NULL;

  return (start);
}


struct node *insert_position(struct node *start)
{
  struct node *ptr, *new_node;
  int pos, last_pos = 0;

  printf("\n\nenter the position :- ");
  scanf("%d", &pos);

  if (pos == 0)
  {
    start = create_beg(start);
    return (start);
  }

  ptr = start;

  while (last_pos != pos)
  {
    ptr = ptr->next;
    last_pos++;
  }

  if (ptr->prev == NULL)
  {
    start = create_end(start);
    return (start);
  }

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  new_node->next = ptr;
  new_node->prev = ptr->prev->next;
  ptr->prev->next = new_node;
  ptr->prev = new_node;
  ptr = start;

  return (start);
}

struct node *delete_beg(struct node *start)
{
  struct node *ptr;

  if (start == NULL)
  {
    printf("\n\nList is empty ");
  }

  else
  {
    ptr = start;
    start->next->prev = NULL;
    start = start->next;
    free(ptr);
  }

  return (start);
}

struct node *delete_end(struct node *start)
{
  struct node *ptr;

  if (start == NULL)
  {
    printf("\n\nlist is empty ");
  }

  else
  {
    ptr = start;

    while (ptr->next != NULL)
    {
      ptr = ptr->next;
    }

    ptr->prev->next = NULL;
    free(ptr);
  }

  return (start);
}

struct node *delete_position(struct node *start)
{
  struct node *ptr;
  int pos, last_pos = 0;

  printf("\n\nenter the position :- ");
  scanf("%d", &pos);

  if (pos == 0)
  {
    start = delete_beg(start);
    return (start);
  }

  ptr = start;

  while (last_pos != pos)
  {
    ptr = ptr->next;
    last_pos++;
  }

  if (ptr->next == NULL)
  {
    start = delete_end(start);
    return (start);
  }

  ptr->prev->next = ptr->next;
  ptr->next->prev = ptr->prev;

  free(ptr);
  return (start);
}

struct node *sort_list(struct node *start)
{
  struct node *ptr1, *ptr2;
  int temp;

  ptr1 = start;

  while (ptr1->next != start)
  {
    ptr2 = ptr1->next;
    do {
      if (ptr1->data > ptr2->data)
      {
        temp = ptr1->data;
        ptr1->data = ptr2->data;
        ptr2->data = temp;
      }
      ptr2 = ptr2->next;
    } while(ptr2 != start);
    ptr1 = ptr1->next;
  }

  return (start);
}
