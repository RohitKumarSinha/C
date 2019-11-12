/* write a program that creates a singly linked list. use a function isSorted that return 1 if the list is sorted
   and 0 otherwise */

   #include <stdio.h>
   #include <malloc.h>
   #include <stdlib.h>

   struct node
   {
     int data;
     struct node *next;
   };

   struct node *start = NULL;

   struct node *create_node(struct node *start);
   struct node *display_node(struct node *start);
   struct node *delete(struct node *start);
    int isSorted(struct node *start);

   int main()
   {
     int choice, res;

     do {
       printf("\n\n1. for create node\n");
       printf("2. for display node\n");
       printf("3. for check that whether the list sorted or not\n");
       printf("4. delete the entire node from the list\n");
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
             res = isSorted(start);

             if (res == 1)
                 printf("\nlinked list is sorted");

             else
                printf("\nlinked list is not sorted");
             break;

        case 4:
             start = delete(start);
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

       printf("\nenter the data :- ");
       scanf("%d", &new_node->data);

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
     while (ptr != NULL)
     {
       printf("%d\t", ptr->data);
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

   int isSorted(struct node *start)
   {
     struct node *ptr1, *ptr2;

     if (start == NULL)
     {
       printf("\n\nYOUR LINKED LIST IS EMPTY");
       return 0;
     }

      ptr1 = start;
      while (ptr1->next != NULL)
      {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
        {
          if (ptr1->data > ptr2->data)
          {
            return 0;
          }

          ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
      }

      return 1;
   }
