// use the linked list of question 28 and delete information about an existing employee

/* write a program to create a linked list which stores the details of employees in a department. Read and print the
   information stored in the list */

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
   int emp_id;
   char emp_name[50];
   int emp_sal;
   char emp_dep[30];
   struct node *next;
};

struct node *start = NULL;

struct node *create_node(struct node *start);
struct node *display_node(struct node *start);
struct node *delete(struct node *start);
struct node *del_spec(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. delete the entire node from the list\n");
    printf("4. delete a specific employee record in your list\n");
    printf("5. exit from the program\n");

    printf("\nEnter the choice :- ");
    scanf("%d", &choice);

       switch (choice)
       {
         case 1:
            start = create_node(start);
            break;

         case 2:
             start = display_node(start);
             break;

        case 3:
             start = delete(start);
             break;

        case 4:
             start = del_spec(start);
             break;

        case 5:
            printf("\n\nyou are going to exit the program");
            exit(0);

       default:
           printf("\n\nInvalid input");
       }
     } while(1);
     return 0;
   }

   struct node *create_node(struct node *start)
   {
     struct node *new_node, *ptr;
     int num;

     printf("\n\nhow many nodes you want to insert in linked list :- ");
     scanf("%d", &num);

     while (num != 0)
     {
       new_node = (struct node *)malloc(sizeof(struct node));

       fflush(stdin);
       printf("\n\nenter the emp_name :- ");
       gets(new_node->emp_name);

       printf("\nenter the emp_dep  :- ");
       gets(new_node->emp_dep);

       printf("\nenter the employee id :- ");
       scanf("%d", &new_node->emp_id);

       printf("\nenter the emp_sal  :- ");
       scanf("%d", &new_node->emp_sal);

       if (start == NULL)
       {
         start = new_node;
         new_node->next = NULL;
       }

       else
       {
         ptr = start;
         while (ptr->next != NULL)
              ptr = ptr->next;

         ptr->next = new_node;
         new_node->next = NULL;
       }
       num--;
       fflush(stdin);
     }

     return(start);
   }


   struct node *display_node(struct node *start)
   {
     struct node *ptr;

     if (start == NULL)
     {
       printf("\n\nYOUR LINKED LIST IS EMPTY");
       return (start);
     }

     ptr = start;

     printf("\n\nYOUR LINKED LIST IS \n");
     printf("emmployee name     employee id   employee department  employee salary\n\n");
     while (ptr != NULL)
     {
       printf("%s            %d                   %s                 %d\n", ptr->emp_name, ptr->emp_id, ptr->emp_dep, ptr->emp_sal);

       ptr = ptr->next;
     }

     return (start);
   }

   struct node *delete(struct node *start)
   {
     struct node *ptr, *next;

     if (start == NULL)
     {
       printf("\n\nYOUR LINKED LIST IS EMPTY");
       return (start);
     }

     ptr = start;

     while (ptr != NULL)
     {
       next = ptr->next;
       free(ptr);
       ptr = next;
     }

     start = NULL;

     printf("\n\nYOUR LINKED LIST IS EMPTY");

     return (start);
   }


struct node *del_spec(struct node *start)
{
  struct node *ptr, *pre_ptr;
  int id;

  printf("\n\nenter the employee id which you want to delete :- ");
  scanf("%d", &id);

  ptr = start;

  while (ptr->emp_id != id)
  {
    pre_ptr = ptr;
    ptr = ptr->next;
  }

  if (ptr == start)
  {
    start = ptr->next;
    free(ptr);

    return (start);
  }

  if (ptr == NULL)
  {
    pre_ptr->next = NULL;
    free(ptr);
    return (start);
  }
  
  pre_ptr->next = ptr->next;
  free(ptr);

  return (start);
}
