/* write a program to create a graph of n vertices using an adjancency list. Also write the code to read and print its
 information and finally to delete the graph. */

#include <stdio.h>
#include <conio.h>
#include <malloc.h>

// define a struct of one variable and another is the pointer of the node;
struct node
{
  char vertext;
  struct node *next;
};

struct node *gnode;

// prototype of a function in which two argument are pass received is array node pointer and second is no of nodes
void displayGraph(struct node *adj[], int no_of_nodes);
void deleteGraph(struct node *adj[], int no_of_nodes);
void createGraph(struct node *adj[], int no_of_nodes);

int main()
{
  // declare an array of node pointer type
  struct node *adj[10];
  int i, no_of_nodes;

  printf("\nEnter the number of nodes in Graph : ");
  scanf("%d", &no_of_nodes);

  // assinging the every node is null
  for (i = 0; i < no_of_nodes; i++)
       adj[i] = NULL;

   // passing the array of node pointer and int variable in the createGraph
   createGraph(adj, no_of_nodes);
   printf("\nThe graph is : ");
   displayGraph(adj, no_of_nodes);
   deleteGraph(adj, no_of_nodes);
}

void createGraph(struct node *adj[], int no_of_nodes)
{
  struct node *new_node, *last;
  int i, j, n, val;

  // execute the loop  number of neighbour times;
  for (i = 0; i < no_of_nodes; i++)
  {
    // assinging NUll to last struct pointer
    last = NULL;
    printf("\nEnter the number of neigbours of %d :", i);
    scanf("%d", &n);

    // enter the neigbours name
    for (j = 1; j <= n; j++)
    {
      printf("\nEnter the neighbour %d of %d :-", j, i);
      scanf("%d", &val);

      // creating a new_node of the graph type and assinging values to it and pointing it to NULL
      new_node = (struct node *)malloc(sizeof(struct node));
      new_node->vertext = val;
      new_node->next = NULL;

      if (adj[i] == NULL)
          adj[i] = new_node;

      else
          last->next = new_node;

      last = new_node;
    }
  }
}

void displayGraph(struct node *adj[], int no_of_nodes)
{
  struct node *ptr;
  int i;

  for (i = 0; i < no_of_nodes; i++)
  {
    // assinging adj[i] into ptr pointer
    ptr = adj[i];
    printf("\n The neighbours of node %d are :", i);


     // print all the neighbour of adj[i];
      while(ptr != NULL)
     {
       printf("\t%d", ptr->vertext);
       ptr = ptr->next;
     }
  }
}

void deleteGraph(struct node *adj[], int no_of_nodes)
{
  int i;
  struct node *temp, *ptr;
  for (i = 0; i <= no_of_nodes; i++)
  {
    ptr = adj[i];

    // delete all the neighbour of adj[i]
    while (ptr != NULL)
    {
      temp = ptr;
      ptr = ptr->next;
      free(temp);
    }

    adj[i] = NULL;
  }
}
