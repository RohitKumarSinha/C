// write a program to implement a dequeue with the help of a linked list
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

struct node *insert_left(struct node *front, struct node *rear);
struct node *insert_right(struct node *front, struct node *rear);
struct node *delete_right(struct node *front, struct node *rear);
struct node *delete_left(struct node *front, struct node *rear);
void display(struct node *front, struct node *rear);

int main()
{
  int choice;

   do {

     printf("\n*****MENU*****");
     printf("\n1. insert at right");
     printf("\n2. insert at left");
     printf("\n3. Delete at right");
     printf("\n4. Delete at left");
     printf("\n5. Display");
     printf("\n6. Exit");
     printf("\nEnter your choice :- ");
     scanf("%d", &choice);

     switch (choice) {
       case 1:
           rear = insert_right(front, rear);
           break;

       case 2:
           rear = insert_left(front, rear);
           break;

       case 3:
            front = delete_right(front, rear);
            break;

       case 4:
            front = delete_left(front, rear);
            break;

       case 5:
            display(front, rear);
            break;

       case 6:
            exit(0);
   }
 }while(1);
}


struct node *insert_left(struct node *front, struct node *rear)
{
  struct node *new_node;
  new_node = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data :- ");
  scanf("%d", &new_node->data);

  if (rear == NULL)
  {
    new_node->next = NULL;
    rear = new_node;
    front = new_node;

    return (rear);
  }

  else
  {
    while (rear->next != NULL)
        rear = rear->next;

    rear = new_node;
    new_node->next = NULL;

    return (rear);
  }

  return (rear);
}

struct node *insert_right(struct node *front, struct node *rear)
{
  struct node *new_node;
  new_node = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data :- ");
  scanf("%d", &new_node->data);

  if (rear == NULL)
  {
    new_node->next = NULL;
    rear = new_node;
    front = new_node;

    return (rear);
  }

  else
  {
    new_node->next = front;
    front = new_node;

    return (rear);
  }
}

struct node *delete_left(struct node *front, struct node *rear)
{
  struct node *ptr;

  if (front == NULL)
  {
    printf("\nLIST IS EMPTY");
  }

  else
  {
    ptr = front;
    front = front->next;
    free(ptr);
  }

  return (front);
}

struct node *delete_right(struct node *front, struct node *rear)
{
  struct node *ptr, *preptr;

  if (front == NULL)
  {
    printf("\nLIST IS EMPTY");
  }

  else
  {
    ptr = front;
    while (ptr->next  != NULL)
    {
      preptr = ptr;
      ptr = ptr->next;
    }

    preptr->next = NULL;
    free(ptr);
  }

  return (front);
}

void display(struct node *front, struct node *rear)
{
  struct node *ptr = front;

  printf("\nTHE LIST IS : \n");

  while (ptr != NULL)
  {
    printf("%d\t", ptr->data);
    ptr = ptr->next;
  }
}
