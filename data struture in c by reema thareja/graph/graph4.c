// write a program to implement topological sorting
#include <stdio.h>
#include <conio.h>
#define MAX 10

// declare global variable n, a 2d array of adj
int n, adj[MAX][MAX];

// declare globally a queue and its rear and front
int front = -1, rear = -1, queue[MAX];

void create_graph(void);
void display();
void insert_queue(int);
int delete_queue(void);
int find_indegree(int);

int main()
{

  // declare int variable of node, j here j = 0, del_node and i;
  int node, j = 0, del_node, i;

  // declare  an array of topSort and indeg
  int topSort[MAX], indeg[MAX];

  // calling a function create_graph
  create_graph();
  printf("\nThe adjacency matrix is : ");
  // calling a function display
  display();

  // find the in-degree of each node
  for (node = 1; node <= n; node++)
  {
    // calling the function find_indegree and passing the value of node and assign the value indeg[node] which find_indegree return
    indeg[node] = find_indegree(node);

    // if indeg[node] is equal to 0 then call the function insert_queue and pass  the  value of node
    if (indeg[node] == 0)
        insert_queue(node);
  }

  while (front <= rear) // continue loop until queue is empty
  {
    del_node = delete_queue();
    topSort[j] = del_node; // add the deleted node to topsort
    j++;

    // delete the del_node edges
    for (node  = 1; node <= n; node++)
    {
      if (adj[del_node][node] == 1)
      {
        adj[del_node][node] = 0;
        indeg[node] = indeg[node] - 1;
        if (indeg[node] == 0)
           insert_queue(node);
      }
    }
  }

    printf("The topological sorting can be given as : \n");
    for (node = 0; i < j; node++)
        printf("%d", topSort[node]);

}


void create_graph()
{
  // declare some int type of variable
  int i, max_edges, org, dest;

  // input through the user that how many vertices in the graph
  printf("\nEnter the number of vertices : ");
  scanf("%d", &n);

  // then  multiply the vertices with its one less vertices and assign into max_edges
  max_edges = n * (n - 1);

  // executes the loop n * n-1 times
  for (i = 1; i <= max_edges; i++)
  {
    // input the destination and source of the vertex
    printf("\nEnter edge %d(0 to quit) : ", i);
    scanf("%d %d", &org, &dest);

    // if the destination and source both are zero then this loop is terminate
    if ((org == 0) && (dest == 0))
       break;

    // if source and destination is greater than number of vertex and destination and source is greater than 0 then
    // this loop executes
    if (org > n || dest > n || org <= 0 || dest <= 0)
    {
      printf("\nInvalid edge");
      i--;
    }

    // otherwise we assign adj[org][dest](global variable) is 1
    else
        adj[org][dest] = 1;
  }
}

void display()
{
  // declare some local variable
  int i, j;

  // execute the loop n (no of vertex)(global variable) times
  for (i = 1; i <= n; i++)
  {
    printf("\n");
    // nesting the loop n times
    for (j = 1; j <= n; j++)
         printf("%3d", adj[i][j]); // print the value of adj[i][j] with 3 space left
  }
}

void insert_queue(int node)
{
  // if the rear is full then print the message otherwise push the node value into queue
  if (rear == MAX - 1)
      printf("\noverflow");

   else
   {
     if (front == -1) // if queue is initially empty
       front = 0;

       queue[++rear] = node;
   }
}

int delete_queue()
{
  int del_node;
  if (front == -1 || front > rear)
  {
    printf("\nUnderflow");
  }

  else
  {
    del_node = queue[front++];
    return del_node;
  }
}

int find_indegree(int node)
{
  // declare some local variable
  int i, in_deg = 0;

  // execute the loop no of vertex times
  for (i = 1; i <= n; i++)
  {
    // if adj[i][node](which is received by the function) is equal to one  then increment in_deg
    if (adj[i][node] == 1)
        in_deg++;
  }

  // return the value of in_deg
  return in_deg;
}
