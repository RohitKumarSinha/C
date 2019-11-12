// write a program to implement input and output restricted dedques

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int dedque[MAX];
int left = -1, right = -1;
void input_dedque(void);
void output_dedque(void);
void insert_left(void);
void insert_right(void);
void delete_right(void);
void delete_left(void);
void display(void);

int main()
{
  int option;
  printf("\n*****MAIN MENU*****");
  printf("\n1. Input restricted deque");
  printf("\n2. output restricted deque");
  printf("\nEnter your choice :- ");
  scanf("%d", &option);

  switch (option) {
    case 1:
       input_dedque();
       break;

    case 2:
        output_dedque();
        break;
  }

  return 0;
}

void input_dedque()
{
  int option;
  do {
     printf("\nINPUT RESTRICTED DEDQUE");
     printf("\n 1. insert at right");
     printf("\n 2. delete from left");
     printf("\n 3. delete from right");
     printf("\n 4. display");
     printf("\n 5. exit");

     printf("Enter your choice :- ");
     scanf("%d", &option);

     switch (option) {
       case 1:
           insert_right();
           break;

       case 2:
           delete_left();
           break;

      case 3:
            delete_right();
            break;

      case 4:
           display();
           break;

      case 5:
            exit(0);
     }
  } while(1);
}

void output_dedque()
{
  int option;
  do
  {
    printf("\nOUTPUT RESTRICTED DEDQUE");
    printf("\n1. insert at right");
    printf("\n2. insert at left");
    printf("\n3. delete from left");
    printf("\n4. display");
    printf("\n5. exit");

    printf("\nEnter your choice :- ");
    scanf("%d", &option);

    switch (option) {
      case 1:
          insert_right();
          break;

      case 2:
          insert_left();
          break;

      case 3:
          delete_left();
          break;

      case 4:
          display();
          break;

      case 5:
         exit(0);
    }
  }
  while(1);
}

void insert_right()
{
  int val;
  printf("\nEnter the value to be added :- ");
  scanf("%d", &val);

  if ((left == 0 && right == MAX - 1) || (left == right + 1))
  {
    printf("\nOVERFLOW");
    return;
  }

  if (left == -1)
  {
    left = 0;
    right = 0;
  }

  else
  {
    if (right == MAX -1)
        right = 0;
    else
       right = right + 1;
  }

  dedque[right] = val;
}

void insert_left()
{
  int val;
  printf("\nenter the value to be added :- ");
  scanf("%d", &val);

  if ((left == 0 && right == MAX - 1) || (left == right + 1))
  {
    printf("\nOVERFLOW");
    return;
  }

  if (left == -1)
  {
    left = 0;
    right = 0;
  }

  else
  {
    if (left == 0)
          left = MAX - 1;

    else
          left = left - 1;
  }

  dedque[left] = val;
}

void delete_left()
{
  if (left == -1)
  {
    printf("\nUNDERFLOW");
    return;
  }

  printf("\nThe deleted element is : %d", dedque[left]);
  if (left == right)
  {
    left = 1;
    right = 1;
  }

  else
  {
    if (left == MAX - 1)
        left = 0;

    else
        left = left + 1;
  }
}

void delete_right()
{
  if (left == -1)
  {
    printf("\nUNDERFLOW");
    return;
  }

  printf("\nThe element deleted is : %d", dedque[right]);
  if (left == right)
  {
    left = -1;
    right = -1;
  }

  else
  {
    if (right == 0)
        right = MAX - 1;

    else
       right = right - 1;
  }
}

void display()
{
  int front = left, rear = right;
  if (front == -1)
  {
    printf("\nQUEUE IS EMPTY");
    return;
  }

  printf("\nThe element of the queue are : ");
  if (front <= rear)
  {
    while (front <= rear)
    {
      printf("%d", dedque[front]);
      front++;
    }
  }

  else
  {
    while (front <= MAX - 1)
    {
      printf("%d", dedque[front]);
      front++;
    }
    front = 0;
    while (front <= rear) {
        printf("%d", dedque[front]);
        front++;
    }
  }
  printf("\n");
}
