// write a program to calculate the number of items in a queue

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void insert();
void delete();
void count();
void display();

int front = -1, rear = -1;
int queue[MAX];

int main()
{
  int choice;

while (1)
{
  printf("\n1. INSERT AN ELEMENT");
  printf("\n2. DELETE AN ELEMENT");
  printf("\n3. COUNT");
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
        count();
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

  if (rear == MAX - 1)
     printf("\nOVERFLOW");

  else
  {
    printf("\nenter the value you want to insert in queue :- ");
    scanf("%d", &val);

    if (rear == -1 && front == -1)
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
  if (front == -1 || rear < front)
      printf("\nUNDERFLOW");

  else
  {
    printf("deleted value is %d", queue[front]);
    front++;
    if (rear < front)
    {
      rear = front = -1;
    }
  }
}

void display()
{
  if (front == -1 || rear < front)
     printf("\nQUEUE IS EMPTY");

  else
  {
    printf("\nyour queue is : \n");
    for (int i = front; i <= rear; i++)
        printf("%d\t", queue[i]);
  }
}

void count()
{
  if (front == -1 || rear < front)
      printf("\nQUEUE IS EMPTY");

  else
  {
    if (front == 0)
    printf("\nthere are %d element in your queue", rear + 1);

    else
      printf("\nthere are %d element in your queue", rear - front + 1);
  }

}
