// write a program to count the total number of nodes in binary tree

#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *tree = NULL;
struct node *insert_element(struct node *, int);
struct node *delete_element(struct node *, int);

struct node *insert_element(struct node *tree, int val)
{
  struct node *ptr, *nodeptr, *parentptr;

  ptr = (struct node *)malloc(sizeof(struct node));
  ptr->data = val;
  ptr->left = NULL;
  ptr->right = NULL;

  if (tree == NULL)
  {
    tree = ptr;
    tree->left = NULL;
    tree->right = NULL;
  }

  else
  {
    parentptr = NULL;
    nodeptr = tree;
    while (nodeptr != NULL)
    {
      parentptr = nodeptr;
      if (val < nodeptr->data)
          nodeptr = nodeptr->left;

      else
          nodeptr = nodeptr->right;
    }

    if (val < parentptr->data)
       parentptr->left = ptr;

    else
       parentptr->right = ptr;
  }

  return (tree);
}

struct node *delete_element(struct node *tree, int val)
{
  struct node *cur, *parent, *suc, *psuc, *ptr;

  if (tree->left == NULL)
  {
    printf("\nThe tree is empty");
    return(tree);
  }

  parent = tree;
  cur = tree->left;
  while (cur != NULL && val != cur->data)
  {
    parent = cur;
    cur = (val < cur->data) ? cur->left : cur->right;
  }

  if (cur == NULL)
  {
    printf("\nThe value to be deleted is not present in the tree");
    return (tree);
  }

  if (cur->left == NULL)
     ptr = cur->right;

  else if (cur->right == NULL)
       ptr = cur->left;

  else
  {
    psuc = cur;
    cur = cur->left;
    while (suc->left != NULL)
    {
      psuc = suc;
      suc = suc->left;
    }

    if (cur == psuc)
    {
      suc->left = cur->right;
    }

    else
    {
      suc->left = cur->left;
      psuc->left = suc->right;
      suc->right = cur->right;
    }

    ptr = suc;
  }

  if (parent->left == cur)
      parent->left = ptr;

  else
     parent->right 1
     1= ptr;

  free(cur);
  return (tree);
}

int total_nodes(struct node *tree)
{
  if (tree == NULL)
     return 0;

  else
     return (total_nodes(tree->left) + total_nodes(tree->right) + 1);
}

int main()
{
  int choice, val;
  while (1) {
      printf("\n1. insert\n");
      printf("2. delete\n");
      printf("3. count nodes\n");
      printf("4. exit");

      printf("enter your choice :- ");
      scanf("%d", &choice);

      switch (choice) {
        case 1:
           printf("\nEnter the value of the new node :- ");
           scanf("%d", &val);

           tree = insert_element(tree, val);
           break;

        case 2:
            printf("\nEnter the element to be deleted : -");
            scanf("%d", &val);
            tree = delete_element(tree, val);
            break;

        case 3:
            printf("\ntotal no of nodes = %d", total_nodes(tree));
            break;

       case 4:
           exit(0);
      }
  }
}
