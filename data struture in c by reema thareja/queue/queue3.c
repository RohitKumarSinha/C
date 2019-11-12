// write a program to create a queue using arrays which permit insertion at both end
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void right(void);
void left(void);
void insert_right(void);
void insert_left(void);
void display_right(void);
void display_left(void);
void delete_right(void);
void delete_left(void);

int queue[MAX];
int frontA = -1, rearA = -1;
int frontB = MAX, rearB = MAX;

int main()
{
  int option;
  do {
    printf("\n*****MENU*****");
    printf("\n1. insert from right");
    printf("\n2. insert from left");
    printf("\n3. exit");
    printf("\nEnter your choice");
    scanf("%d", &option);

    switch (option) {
      case 1:
        right();
        break;

      case 2:
         left();
         break;

      case 3:
         exit(0);
    }
  } while(1);
}

void right()
{
   int option;
  do {
    printf("\n*****MENU*****");
    printf("\n1. insert");
    printf("\n2. delete");
    printf("\n3. display");
    printf("\n4. exit");
    printf("\nEnter your choice");
    scanf("%d", &option);

    switch (option) {
      case 1:
        insert_right();
        break;

      case 2:
         delete_right();
         break;

      case 3:
         display_right();
         break;

      case 4:
         exit(0);
    }
  } while(1);


}

void left()
{
   int option;
  do {
    printf("\n*****MENU*****");
    printf("\n1. insert");
    printf("\n2. delete");
    printf("\n3. display");
    printf("\n4. exit");
    printf("\nEnter your choice");
    scanf("%d", &option);

    switch (option) {
      case 1:
        insert_left();
        break;

      case 2:
         delete_left();
         break;

      case 3:
         display_left();
         break;

      case 4:
         exit(0);
    }
  } while(1);


}


void insert_right()
{
  int val;
  if (rearB == -1)
  {
    printf("\nOVERFLOW");
  }

  else
  {
    printf("Enter the value you want to insert in queue :- ");
    scanf("%d", &val);

    if (rearB == MAX && frontB == MAX)
    {
      rearB = frontB = MAX - 1;
      queue[rearB] = val;
    }

    else
    {
      rearB--;
      queue[rearB] = val;
    }
  }
}

void delete_right()
{
  if (frontB == MAX || rearB > frontB)
  {
    printf("\nUNDERFLOW");
  }

  else
  {
    printf("The number is deleted is %d", queue[frontB]);
    frontB--;

    if (frontB < rearB)
       frontB = rearB = MAX;
  }
}

void display_right()
{

  if (frontB == MAX || rearB > frontB)
  {
    printf("\nUNDERFLOW");
  }

  else
  {
    printf("\nThe queue is : \n");
    for (int i = frontB; i >= rearB; i--)
    {
      printf("%d\t", queue[i]);
    }
  }
}


void insert_left()
{
  int val;
  if (rearA == MAX - 1 || frontA > rearA)
  {
    printf("\nOVERFLOW");
  }

  else
  {
    printf("Enter the value you want to insert in queue :- ");
    scanf("%d", &val);

    if (rearA == -1 && frontA == -1)
    {
      rearA = frontA = 0;
      queue[rearA] = val;
    }

    else
    {
      rearA++;
      queue[rearA] = val;
    }
  }
}

void delete_left()
{
  if (frontA == -1 || rearA < frontA)
  {
    printf("\nUNDERFLOW");
  }

  else
  {
    printf("The number is deleted is %d", queue[frontA]);
    frontA++;

    if (frontA > rearA)
       frontA = rearA = -1;
  }
}

void display_left()
{

  if (frontA == -1 || rearA < frontA)
  {
    printf("\nUNDERFLOW");
  }

  else
  {
    printf("\nThe queue is : \n");
    for (int i = frontA; i <= rearA; i++)
    {
      printf("%d\t", queue[i]);
    }
  }
}
