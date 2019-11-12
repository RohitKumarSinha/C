// write a program to implement the breadth-first search algorithm

#include <stdio.h>
#define MAX 10

//                          input keyboard,  0 of every var, 0
void breadth_first_search(int adj[][MAX], int visited[], int start)
{
  // declare a queue
  int queue[MAX], rear = -1, front = -1, i;

  // increment the rear and then assing 0 to it
  queue[++rear] = start;

  // in visted[0] assign 1
  visited[start] = 1;

  while (rear != front)
  {
    // assign 0 to 
    start = queue[++front];
    if (start == 4)
       printf("5\t");

    else
      printf("%c\t", start + 65);

    for (i = 0; i < MAX; i++)
    {
      if(adj[start][i] == 1 && visited[i] == 0)
      {
        queue[++rear] = i;
        visited[i] = 1;
      }
    }
  }
}

int main()
{
  // declare a int array of 10 variable and assign 0 to every variable
  int visited[MAX] = {0};

  // declare a 2 d array of 10 x 10 variable
  int adj[MAX][MAX], i, j;

  // input the adj matrix
  printf("\nEnter the adjancency Matrix : ");
  for (i = 0; i < MAX;  i++)
      for(j = 0; j < MAX; j++)
          scanf("%d", &adj[i][j]);

   // passing an 2d array adj, one dimensional array visted and  0 as a int variable
   breadth_first_search(adj, visited, 0);
   return 0;
}
