// write a program to implement a linear queue
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

  if (rear == 19)
      printf("\nOVERFLOW");

  else
  {
    printf("\nENTER A VALUE :- ");
    scanf("%d", &val);

    if (rear == -1 && front == -1)
    {
      rear = front = 0;
      queue[front] = val;
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
  int val;
  if (front == -1 || front > rear)
  {
    printf("\nUNDERFLOW");
  }

  else
  {
    printf("\n%d", queue[front]);
    front++;
    if (front > rear)
    {
      front = rear = -1;
    }
  }
}

void peek()
{
  if (front == -1 || front > rear)
  {
    printf("\nUNDERFLOW");
  }

  else
  {
    printf("\n%d", queue[front]);
  }
}

void display()
{
  if (front == -1 || front > rear)
  {
    printf("\nQUEUE IS EMPTY");
  }

  else
  {
    for (int i = front; i <= rear; i++)
       printf("%d\t", queue[i]);
  }
}
