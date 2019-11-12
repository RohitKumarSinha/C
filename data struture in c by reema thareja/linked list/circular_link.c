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
struct node *create_beg(struct node *start);
struct node *create_end(struct node *start);
struct node *delete_beg(struct node *start);
struct node *delete_end(struct node *start);
struct node *insert_position(struct node *start);
struct node *delete_position(struct node *start);

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
  start = delete_position(start);
  start = display_node(start);
  start = delete(start);
  return 0;
}

struct node *create_node(struct node *start)
{
  struct node *new_node, *ptr;
  int num;

  printf("\n\nenter how many data you want to enter :- ");
  scanf("%d", &num);

  while (num != 0)
  {
    new_node = (struct node *)malloc(sizeof(struct node));

    printf("enter the data :- ");
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
      {
        ptr = ptr->next;
      }

      ptr->next = new_node;
      new_node->next = start;
    }

     num--;
  }

  return (start);
}


struct node *display_node(struct node *start)
{
  struct node *ptr;

  ptr = start;

  printf("\n\nYOUR LINKED LIST IS : \n");
  do {
    printf("%d\t", ptr->data);
    ptr = ptr->next;

  } while(ptr != start);

  return (start);
}

struct node *delete(struct node *start)
{
  struct node *ptr, *next;

  ptr = start;

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
  struct node *new_node, *ptr = start;

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  while (ptr->next != start)
        ptr = ptr->next;

  ptr->next = new_node;

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

  while (ptr->next != start)
         ptr = ptr->next;

   ptr->next = new_node;
   new_node->next = start;

   return(start);
}

struct node *delete_beg(struct node *start)
{
  struct node *ptr = start, *t = start;

   while (ptr->next != start)
        ptr = ptr->next;

   ptr->next = start->next;
   start = start->next;
   free(t);

   return(start);
}

struct node *delete_end(struct node *start)
{
  struct node *ptr = start, *pre_ptr;

  while (ptr->next != start)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
  }

   pre_ptr->next = start;
   free(ptr);

   return(start);
}

struct node *insert_position(struct node *start)
{
  struct node *new_node, *ptr = start, *pre_ptr;
  int pos, last_pos = 0;

  printf("\n\nenter the position where you want to insert your number :- ");
  scanf("%d", &pos);

  if (pos == 0)
  {
    start = create_beg(start);
    return(start);
  }

  while (pos != last_pos)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
    last_pos++;
  }

  if (pre_ptr->next == start)
  {
    start = create_end(start);
    return (start);
  }

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\nenter the data :- ");
  scanf("%d", &new_node->data);

  pre_ptr->next = new_node;
  new_node->next = ptr;


  return (start);
}

struct node *delete_position(struct node *start)
{
  struct node *ptr = start, *pre_ptr;
  int pos, last_pos = 0;

  printf("\n\nenter the position where you want to delete your number :- ");
  scanf("%d", &pos);

  if (pos == 0)
  {
    start = delete_beg(start);
    return(start);
  }

  while (pos != last_pos)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
    last_pos++;
  }

  if (pre_ptr->next == start)
  {
    start = delete_end(start);
    return (start);
  }

  pre_ptr->next = ptr->next;
  free(ptr);


  return (start);
}
