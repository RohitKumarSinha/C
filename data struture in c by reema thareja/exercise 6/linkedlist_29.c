// use the linked list of question 28 so that it displays the record  of a given employee

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

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
struct node *specific_disp(struct node *start);

int main()
{
  int choice;

  do {
    printf("\n\n1. for create node\n");
    printf("2. for display node\n");
    printf("3. delete the entire node from the list\n");
    printf("4. for search employee\n");
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
            start = specific_disp(start);
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

struct node *specific_disp(struct node *start)
{
  struct node *ptr;
  char name[50];

   fflush(stdin);
   printf("\n\nenter the name of the employee you want to search :- ");
   gets(name);

   ptr = start;

   while (ptr != NULL)
   {
     if (strcmp(ptr->emp_name, name) == 0)
     {
       printf("\nemployee name :- %s", ptr->emp_name);
       printf("\nemployee id :- %d", ptr->emp_id);
       printf("\nemployee department :- %s", ptr->emp_dep);
       printf("\nemployee salary :- %d", ptr->emp_sal);

       return (start);
     }

     ptr = ptr->next;
   }

  printf("\nyour search didn't found");

   return (start);
}
