// write a program to input two queues and compare their contents

// write a program to create a linear queue of 10 values

#include <stdio.h>
#include <stdlib.h>

void insert_first();
void delete_first();
void peek_first();
void display_first();
void insert_second();
void delete_second();
void peek_second();
void display_second();
void compare();

int frontA = -1, rearA = -1;
int frontB = -1, rearB = -1;

int queueA[11], queueB[11];

int main()
{
  int choice;

while (1)
{
  printf("\n1. INSERT AN ELEMENT IN FIRST QUEUE");
  printf("\n2. DELETE AN ELEMENT IN FIRST QUEUE");
  printf("\n3. PEEK AN ELEMENT IN FIRST QUEUE");
  printf("\n4. DISPLAY THE ELEMENT IN FIRST QUEUE");
  printf("\n5. INSERT AN ELEMENT IN SECOND QUEUE");
  printf("\n6. DELETE AN ELEMENT IN SECOND QUEUE");
  printf("\n7. PEEK AN ELEMENT IN SECOND QUEUE");
  printf("\n8. DISPLAY THE ELEMENT IN FIRST QUEUE");
  printf("\n9. COMPARE THE ELEMENT OF FIRST AND SECOND QUEUE");
  printf("\n10. EXIT");

  printf("\nENTER YOUR CHOICE  :- ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
       insert_first();
       break;

    case 2:
       delete_first();
       break;

    case 3:
        peek_first();
        break;

    case 4:
        display_first();
        break;

    case 5:
        insert_second();
        break;

    case 6:
        delete_second();
        break;

    case 7:
        peek_second();
        break;

    case 8:
        display_second();
        break;

    case 9:
        compare();
        break;

    case 10:
        exit(0);
    }
  }
}


void insert_first()
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

    if (frontA == -1 && rearA == -1)
    {
      frontA = rearA = 0;
      queueA[rearA] = val;
    }

    else
    {
      rearA++;
      queueA[rearA] = val;
    }
  }
}

void delete_first()
{
  if (frontA == -1 || frontA > rearA)
     printf("\nUNDERFLOW");

  else
  {
    printf("\nyour delted value is %d", queueA[frontA]);
    frontA++;
    if (rearA < frontA)
       rearA = frontA = -1;
  }
}

void display_first()
{
  if (frontA == -1 || frontA > rearA)
     printf("\nUNDERFLOW");

  else
  {
    printf("\nYOUR QUEUE IS \n");
    for (int i = frontA; rearA >= i; i++)
        printf("%d\t", queueA[i]);

  }

}

void peek_first()
{
  if (frontA == -1 || frontA > rearA)
     printf("\nUNDERFLOW");

   else
     printf("\n%d", queueA[frontA]);
}


void insert_second()
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

    if (frontB == -1 && rearB == -1)
    {
      frontB = rearB = 0;
      queueB[rearB] = val;
    }

    else
    {
      rearB++;
      queueB[rearB] = val;
    }
  }
}

void delete_second()
{
  if (frontB == -1 || frontB > rearB)
     printf("\nUNDERFLOW");

  else
  {
    printf("\nyour delted value is %d", queueB[frontB]);
    frontB++;
    if (rearB < frontB)
       rearB = frontB = -1;
  }
}

void display_second()
{
  if (frontB == -1 || frontB > rearB)
     printf("\nUNDERFLOW");

  else
  {
    printf("\nYOUR QUEUE IS \n");
    for (int i = frontB; rearB >= i; i++)
        printf("%d\t", queueB[i]);

  }

}

void peek_second()
{
  if (frontB == -1 || frontB > rearB)
     printf("\nUNDERFLOW");

   else
     printf("\n%d", queueB[frontB]);
}

void compare()
{
  if (rearA != rearB || rearA == -1 || rearB == -1)
      printf("\nwe can't compare the values");

  else
  {
    for (int i = frontA; i <= rearA; i++)
    {
      if (queueA[i] > queueB[i])
      {
        printf("\n%d of first queue is greater than %d of second queue", i + 1, i + 1);
      }

      else if (queueA[i] > queueB[i])
      {
        printf("\n%d of first queue is equal than %d of second queue", i + 1, i + 1);
      }

      else
      {
        printf("\n%d of first queue is smaller than %d of second queue", i + 1, i + 1);
      }
    }
  }
}
