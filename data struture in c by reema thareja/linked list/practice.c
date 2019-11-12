#include <stdio.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start = NULL;

struct node *insert(struct node *start, int data, int pos);
struct node *display(struct node *start);
struct node *delete(struct node *start);
struct node *delete_pos(struct node *start, int);
void reversenode(struct node *start);

int main()
{
  start = insert(start, 5, 0);
  start = display(start);
  start = insert(start, 7, 1);
  start = display(start);
  start = insert(start, 8, 2);
  start = display(start);
  start = insert(start, 9, 1);
  start = display(start);
  start = delete_pos(start, 0);
  start = display(start);
  reversenode(start);
  start = delete(start);

  return 0;
}

struct node *insert(struct node *start, int data, int pos)
{
  struct node *new_node, *ptr, *pre_ptr;
  int val = 0;

  new_node = (struct node *)malloc(sizeof(struct node));

  new_node->data = data;

  if (start == NULL && pos == 0)
  {
    start = new_node;
    new_node->next = NULL;

    return (start);
  }

  if (pos == 0 && start != NULL)
  {
    new_node->next = start;
    start = new_node;

    return (start);
  }

  ptr = start;

  while (val != pos)
  {
     pre_ptr = ptr;
     ptr = ptr->next;

     val++;
  }

   pre_ptr->next = new_node;
   new_node->next = ptr;

   return (start);
}

struct node *display(struct node *start)
{
  struct node *ptr;

  ptr = start;

  printf("\n\nHere is linked list \n");

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

  start  = NULL;

  printf("\n\nyour linked list is empty \n");

  return (start);
}


struct node *delete_pos(struct node *start, int pos)
{
  struct node *ptr, *pre_ptr;
  int val = 0;

  if (pos == 0 && start != NULL)
  {
    ptr = start;
    start = start->next;
    free(ptr);

    return (start);
  }

  ptr = start;

  while (val != pos)
  {
    pre_ptr = ptr;
    ptr = ptr->next;

    val++;
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


void reversenode(struct node *start)
{

  struct node *ptr, *pre_ptr, *val_ptr;
  int val;

  ptr = start;

  if (start = NULL)
      return;

  while (ptr->next != NULL)
        ptr = ptr->next;

  val_ptr = ptr->next;

  printf("start = %d", val_ptr->data);
  val = ptr->data;

  ptr = start;

  while (start->data != val)
  {
    while (ptr->next != NULL)
    {
      pre_ptr = ptr;
      ptr = ptr->next;
    }

    ptr->next = start;
    start = ptr;
    pre_ptr->next = NULL;
  }

  ptr = start;

  while (ptr->next != NULL)
  {
    printf("%d\t", ptr->data);
    ptr = ptr->next;
  }

}
