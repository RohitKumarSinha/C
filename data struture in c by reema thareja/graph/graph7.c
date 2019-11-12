// write a program to implement warshall's modified algorithm to find the shortest path

#include <stdio.h>
#include <conio.h>
#define INFINITY 9999

void read(int mat[5][5], int n);
void display(int mat[5][5], int n);

int main()
{
  int adj[5][5], q[5][5], n, i, j, k;
  printf("\nEnter the number of nodes in the graph :- ");
  scanf("%d", &n);

  printf("\nEnter the adjanceny matrix :- ");
  read(adj, n);

  printf("\nThe adjanceny matrix is : ");
  display(adj, n);

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (adj[i][j] == 0)
         q[i][j] = INFINITY;

      else
         q[i][j] = adj[i][j];
    }
  }

  for (k = 0; k < n; k++)
  {
    for(i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
      {
        if (q[i][j] <= q[i][k] + q[k][j])
            q[i][j] = q[i][j];

        else
            q[i][j] = q[i][k] + q[k][j];
      }
    }

    printf("\n\n");
    display(q, n);
  }

  return 0;
}


void read(int mat[5][5], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("\nmat[%d][%d] = ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
}

void display(int mat[5][5], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    printf("\n");
    for (j = 0; j < n; j++)
        printf("%d\t", mat[i][j]);
  }
}
