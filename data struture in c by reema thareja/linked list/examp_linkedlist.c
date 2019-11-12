// write a program to create a circular linked list. perform insertion and deletion at the beginning and the end of the LIST

#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start = NULL;

struct node *create_node(struct node *start);
struct node *display_node(struct node *start);
struct node *delete_node(struct node *start);
struct node *insert_beg(struct node *start);
struct node *insert_end(struct node *start);
struct node *delete_beg(struct node *start);
struct node *delete_end(struct node *start);
struct node *insert_after(struct node *start);

int main()
{
  start = create_node(start);
  start = display_node(start);
  start = insert_beg(start);
  start = display_node(start);
  start = insert_end(start);
  start = display_node(start);
  start = delete_beg(start);
  start = display_node(start);
  start = delete_end(start);
  start = display_node(start);
  start = insert_after(start);
  start = display_node(start);
  start = delete_node(start);

  return 0;
}


struct node *create_node(struct node *start)
{
  int num;
  struct node *new_node, *ptr;

  printf("\nenter how many circular nodes you want to insert in the list :- ");
  scanf("%d", &num);

  while(num != 0)
  {
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nenter the data :- ");
    scanf("%d", &new_node->data);

    if (start == NULL)
    {
      new_node->next = new_node;
      start = new_node;
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
  return (start);
}

struct node *display_node(struct node *start)
{
  struct node *ptr;

  ptr = start;

  printf("\nYOUR LINKED LIST IS \n\n");

   while(ptr->next != start)
   {
     printf("%d\t", ptr->data);
     ptr = ptr->next;
   }

   printf("%d", ptr->data);
  return (start);
}

struct node *delete_node(struct node *start)
{
  struct node *ptr, *next;

  ptr = start;

  while (ptr->next != start)
  {
    next = ptr->next;
    free(ptr);
    ptr = next;
  }

  printf("\nYOUR LINKED LIST IS EMPTY");

  start = NULL;

  return(start);
}


struct node *insert_beg(struct node *start)
{
  struct node *ptr, *new_node;

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  ptr = start;

  while (ptr->next != start)
        ptr = ptr->next;

  ptr->next = new_node;
  new_node->next = start;
  start = new_node;

  return (start);
}


struct node *insert_end(struct node *start)
{
  struct node *ptr, *new_node;

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\n\nenter the data :- ");
  scanf("%d", &new_node->data);

  ptr = start;

  while (ptr->next != start)
  {
    ptr = ptr->next;
  }

  ptr->next = new_node;
  new_node->next = start;

  return (start);
}

struct node *delete_beg(struct node *start)
{
  struct node *ptr, *t;

  ptr = start;
  t = start;

  while (ptr->next != start)
        ptr = ptr->next;


  ptr->next = start->next;
  start = start->next;

  free(t);
  return(start);
}


struct node *delete_end(struct node *start)
{
  struct node *ptr, *pre_ptr;

  ptr = start;

  while (ptr->next != start)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
  }

    pre_ptr->next = start;
    free(ptr);

   return (start);
}

struct node *insert_after(struct node *start)
{
  struct node *ptr, *pre_ptr, *new_node;
  int val;

  printf("\n\nenter after which data you want to insert your number :- ");
  scanf("%d", &val);

  new_node = (struct node *)malloc(sizeof(struct node));

  printf("\nenter the data :- ");
  scanf("%d", &new_node->data);

  ptr = start;

  while (ptr->data != val)
  {
    ptr = ptr->next;
  }

  pre_ptr->next = ptr;

   printf("%d\n", pre_ptr->data);
   printf("%d\n",ptr->data );

    pre_ptr->next = new_node;
    new_node->next = ptr;

  return (start);
}
