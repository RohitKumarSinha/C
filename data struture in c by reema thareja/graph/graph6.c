// write a program to implement warshall's algorithm to find the path matrix


#include <stdio.h>
#include <conio.h>

void read(int mat[5][5], int n);
void display(int mat[5][5], int n);
void mul(int mat[5][5], int n);

int main()
{
  int adj[5][5], p[5][5], n, i, j, k;
  printf("\nEnter the number of nodes in the graph :- ");
  scanf("%d", &n);
  printf("\nEnter the adjancency matrix :- ");
  read(adj, n);
  printf("\nThe adjancency matrix is : ");
  display(adj, n);

  for (i = 0; i < n; i++)
  {
    for(j = 0; j < n; j++)
    {
      if (adj[i][j] == 0)
          p[i][j] = 0;

      else
         p[i][j] = 1;
    }
  }

  for (k = 0; k < n; k++)
  {
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
          p[i][j] = p[i][j] | (p[i][k] & p[k][j]);
    }
  }

  printf("\nThe path matrix is : ");
  display(p, n);
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
      for (j = 0; j < n; j++)
          printf("%d\t", mat[i][j]);
}
