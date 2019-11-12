// write a program to implement a circular queue

#include <stdio.h>
#include <stdlib.h>

void insert();
void delete();
void peek();
void display();

int front = -1, rear = -1;
int queue[20];

int main()
{
  int choice;

while (1)
{
  printf("\n1. INSERT AN ELEMENT");
  printf("\n2. DELETE AN ELEMENT");
  printf("\n3. PEEK");
  printf("\n4. DISPLAY THE QUEUE");
  printf("\n5. EXIT");

  printf("\nENTER YOUR CHOICE  :- ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
       insert();
       break;

    case 2:
       delete();
       break;

    case 3:
        peek();
        break;

    case 4:
        display();
        break;

    case 5:
        exit(0);
    }
  }
}


void insert()
{
  int val;

  if (rear == 19 && front == 0)
      printf("\nOVERFLOW");

  else
  {
    printf("\nEnter the value you want to insert :- ");
    scanf("%d", &val);

    if (rear == 19 && front != 0)
    {
      rear = 0;
      queue[rear] = val;
    }

    else if (rear == -1 && front == -1)
    {
      rear = front = 0;
      queue[rear] = val;
    }

    else
    {
      rear++;
      queue[rear] = val;
    }
  }
}

void delete()
{
  if (front == -1)
     printf("\nUNDERFLOW");

  else
  {
    printf("\n%d", queue[front]);
    if (front == rear)
    {
      front = rear = -1;
    }

    else if (front == 19)
    {
      front = 0;
    }

    else
    {
      front = front + 1;
    }
  }
}

void display()
{
  if (front == -1 && rear == -1)
     printf("\nQUEUE IS EMPTY");

  else
  {
    if (front < rear)
    {
      for(int i = front; i <= rear; i++)
         printf("%d\t", queue[i]);
    }

    else
    {
      for (int i = front; i <= 19; i++)
          printf("%d\t", queue[i]);

      for (int i = rear; i < rear; i++)
          printf("%d\t", queue[i]);
    }
  }
}

void peek()
{
  if (front == -1 && rear == -1)
      printf("\nQUEUE IS EMPTY");

  else
  {
    printf("\n%d", queue[front]);
  }
}
