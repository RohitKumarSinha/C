// write a program to implement multiple queue
#include <stdio.h>
#define MAX 10

int queue[MAX];
int rearA = -1, frontA = -1, rearB = MAX, frontB = MAX;

int main()
{
  int option, val;

do {

  printf("\n*****MENU*****");
  printf("\n1. INSERT IN QUEUE A");
  printf("\n2. DELETE IN QUEUE A");
  printf("\n3. DISPLAY IN QUEUE A");
  printf("\n4. INSERT IN QUEUE B");
  printf("\n5. DELETE IN QUEUE B");
  printf("\n6. DISPLAY IN QUEUE A");
  printf("\n7. EXIT");
  printf("\nEnter your choice :- ");
  scanf("%d", &option);

  switch (option) {
    case 1:
    printf("\nEnter a value :- ");
    scanf("%d", val);
    insertA(val);
    break;

    case 2:
    deleteA();
    break;

    case 3:
    displayA();
    break;

    case 4:
    printf("\nEnter a value :- ");
    scanf("%d", val);
    insertB(val);
    break;

    case 5:
    deleteB();
    break;

    case 6:
    displayB();
    break;

    case 7:
    exit(0);

  }
} while(1);

}

void insertA(int val)
{
  if (rearA == rearB - 1)
  {
    printf("\nOVERFLOW");
  }

  else
  {
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

void deleteA()
{
  if (rearA == -1 && frontA == -1)
  {
    printf("\nUNDERFLOW");
  }

  else
  {
    printf("\ndeleted value is %d", queue[frontA]);
    frontA++;

    if (frontA > rearA)
       frontA = rearA = -1;
  }
}

void displayA()
{
  if (rearA == -1 && frontA == -1)
  {
    printf("\nqueue is empty");
  }

  else
  {
    for (int i = frontA; rearA >= i; i++)
         printf("%d\t", queue[frontA]);
  }
}

void insertB(int val)
{
  if (rearA == rearB - 1)
  {
    printf("\nOVERFLOW");
  }

  else
  {
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

void deleteB()
{
  if (rearB == MAX && frontB == MAX)
  {
    printf("\nUNDERFLOW");
  }

  else
  {
    printf("\ndeleted value is %d", queue[frontB]);
    frontB--;

    if (frontB < rearB)
       frontB = rearB = MAX;
  }
}

void displayB()
{
  if (rearB == -1 && frontB == -1)
  {
    printf("\nqueue is empty");
  }

  else
  {
    for (int i = frontB; rearB <= i; i--)
         printf("%d\t", queue[frontB]);
  }
}
