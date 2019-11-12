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
struct node *display_node(struct node *start);
struct node *delete(struct node *start);
struct node *create_beg(struct node *start);
struct node *create_end(struct node *start);
struct node *delete_beg(struct node *start);
struct node *delete_end(struct node *start);
struct node *insert_position(struct node *start);

int main()
{
  start = create_node(start);
  start = display_node(start);
  start = create_beg(start);
  start = display_node(start);
  start = create_end(start);
  start = display_node(start);
  start = delete_beg(start);
  start = display_node(start);
  start = delete_end(start);
  start = display_node(start);
  start = insert_position(start);
  start = display_node(start);
  start = delete(start);

  return 0;
}

struct node *create_node(struct node *start)
{
  struct node *ptr, *new_node;
  int num;

  printf("\n\nEnter how many doubly circular nodes you want to create in the link list :- ");
  scanf("%d", &num);

  while (num != 0)
  {

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data :- ");
    scanf("%d", &new_node->data);


    if (start == NULL)
    {
       start = new_node;
       new_node->prev = new_node;
       new_node->next = new_node;
    }

    else
    {
      ptr = start;
      while (ptr->next != start)
            ptr = ptr->next;

      new_node->next = start;
      new_node->prev = ptr;
      ptr->next = new_node;
    }

    num--;
  }

  return (start);
}

struct node *display_node(struct node *start)
{
  struct node *ptr = start;

  printf("\n\nYOUR LINKED LIST IS :\n");

  do {
    printf("%d\t", ptr->data);
    ptr = ptr->next;
  } while(ptr != start);

  return (start);
}

struct node *delete(struct node *start)
{
  struct node *ptr = start, *next;

  do {
    next = ptr->next;
    free(ptr);
    ptr = next;
  } while(ptr != start);

  start = NULL;

  printf("\n\nYOUR LINKED LIST IS EMPTY");
  return (start);
}


struct node *create_beg(struct node *start)
{
  struct node *ptr, *new_node;

  new_node = (struct node *)malloc(sizeof(struct node));
  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  if (start == NULL)
  {
    start = new_node;
    new_node->prev = new_node;
    new_node->next = new_node;

    return (start);
  }

  else
  {
    while (ptr->next != start)
         ptr = ptr->next;

    ptr->next = new_node;
    new_node->prev = ptr;
    new_node->next = start;
    start = new_node;
  }

  return (start);
}

struct node *create_end(struct node *start)
{
  struct node *ptr, *new_node;

  new_node = (struct node *)malloc(sizeof(struct node));
  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  if (start == NULL)
  {
    start = create_beg(start);
    return (start);
  }

  else
  {
    while (ptr->next != start)
         ptr = ptr->next;

    ptr->next = new_node;
    new_node->prev = ptr;
    new_node->next = start;
  }

  return (start);
}

struct node *delete_beg(struct node *start)
{
  struct node *ptr = start, *t = start;

  if (start == NULL)
  {
    printf("\n\nCircular doubly linked list is empty ");
    return(start);
  }

  else
  {
    while (ptr->next != start)
    {
      ptr = ptr->next;
    }

    ptr->next = start->next;
    start->next->prev = ptr;
    start = start->next;

    free(t);
  }

  return(start);
}

struct node *delete_end(struct node *start)
{
  struct node *ptr = start;

  if (start == NULL)
  {
    printf("\n\ncircular doubly linked list is empty ");
  }

  else
  {
    while (ptr->next != start)
         ptr = ptr->next;

    ptr->prev->next = start;
    start->prev = ptr->prev;

    free (ptr);
  }

  return (start);
}

struct node *insert_position(struct node *start)
{
  struct node *ptr = start, *new_node;
  int pos, last_pos = 0;

  printf("\n\nEnter the postion where you want to insert your circular doubly linked list :- ");
  scanf("%d", &pos);

  if (pos == 0)
  {
    start = create_beg(start);
    return (start);
  }

  while (last_pos != pos)
  {
    last_pos++;
    ptr = ptr->next;
  }

  if (pos == last_pos)
  {
    start = create_end(start);
    return (start);
  }

  new_node = (struct node *)malloc(sizeof(struct node));
  printf("\nenter the data :- ");
  scanf("%d", &new_node->data);

  new_node->next = ptr;
  new_node->prev = ptr->prev->next;
  ptr->prev = new_node;
  
  return (start);
}
