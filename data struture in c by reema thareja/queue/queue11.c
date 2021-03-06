// write a program to reverse the elments of a queue

#include <stdio.h>
#include <stdlib.h>

void insert();
void delete();
void peek();
void display();
void reverse();

int front = -1, rear = -1;
int queue[11];

int main()
{
  int choice;

while (1)
{
  printf("\n1. INSERT AN ELEMENT");
  printf("\n2. DELETE AN ELEMENT");
  printf("\n3. PEEK");
  printf("\n4. DISPLAY THE QUEUE");
  printf("\n5. REVERSE THE QUEUE");
  printf("\n6. EXIT");

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
        reverse();
        break;

    case 6:
        exit(0);
    }
  }
}


void insert()
{
  int val;

  if (val == 10)
  {
    printf("\nOVERFLOW");
  }

  else
  {
    printf("Enter the number you want to inserted in queue :- ");
    scanf("%d", &val);

    if (front == -1 && rear == -1)
    {
      front = rear = 0;
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
  if (front == -1 || front > rear)
     printf("\nUNDERFLOW");

  else
  {
    printf("\nyour delted value is %d", queue[front]);
    front++;
    if (rear < front)
       rear = front = -1;
  }
}

void display()
{
  if (front == -1 || front > rear)
     printf("\nUNDERFLOW");

  else
  {
    printf("\nYOUR QUEUE IS \n");
    for (int i = front; rear >= i; i++)
        printf("%d\t", queue[i]);

  }

}

void peek()
{

  if (front == -1 || front > rear)
     printf("\nUNDERFLOW");

   else
     printf("\n%d", queue[front]);
}

void reverse()
{
   int copy_queue[11], j = 0;

  if (front == -1 || front > rear)
     printf("\nUNDERFLOW");

   else
  {
    for (int i = rear; i >= front; i--)
    {
      copy_queue[j] = queue[i];
      j++;
    }

    for (int i = 0; i <= rear; i++)
    {
      queue[i] = copy_queue[i];
    }
  }
}
