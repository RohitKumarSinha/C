/* write a menu driven program to read and display a p x q x r matrix. Also, find the sum, transpose, and product
  of the two p x q x r matrices */

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int choice, m1[3][3][3], m2[3][3][3];

  while(1)
  {
    printf("press 1 for read the two matrices : \n");
    printf("press 2 for display the two matrices : \n");
    printf("press 3 for sum the two matrices : \n");
    printf("press 4 for transpose two matrices : \n");
    printf("press 5 for product two matrices : \n");
    printf("press 6 for exit the program : \n");

    scanf("%d", &choice);

    switch(choice)
    {
      case 1:

      printf("Enter the first matrix of 3 x 3 x 3 : \n");

      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          for (int k = 0; k < 3; k++)
          {
            printf("m1[%d][%d][%d] = ", i, j, k);
            scanf("%d", &m1[i][j][k]);
          }
        }
      }

      printf("\n\nEnter the second matrix of 3 x 3 x 3 : \n");

      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          for (int k = 0; k < 3; k++)
          {
            printf("m2[%d][%d][%d] = ", i, j, k);
            scanf("%d", &m2[i][j][k]);
          }
        }
      }

      break;

      case 2:

      printf("\n\nhere the first matrix of 3 x 3 x 3 : \n");

      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          for (int k = 0; k < 3; k++)
          {
            printf("m1[%d][%d][%d] = %d\n", i, j, k, m1[i][j][k]);
          }
        }
      }

      printf("\n\nEnter the second matrix of 3 x 3 x 3 : \n");

      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          for (int k = 0; k < 3; k++)
          {
            printf("m2[%d][%d][%d] = %d \n", i, j, k, m2[i][j][k]);
          }
        }
      }

      break;


      case 3:

      printf("\n\nhere the sum matrices of 3 x 3 x 3 : \n");

      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          for (int k = 0; k < 3; k++)
          {
            printf("m1[%d][%d][%d] + m2[%d][%d][%d] = %d\n", i, j, k, i, j, k, m1[i][j][k] + m2[i][j][k]);
          }
        }
      }

      break;

      case 4:

      printf("\n\nhere the  transpose first matrix of 3 x 3 x 3 : \n");

      for (int i = 0; i < 3; i++)
      {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
          printf("\n");
          for (int k = 0; k < 3; k++)
          {
            printf("m1[%d][%d][%d] = %d\t", i, j, k, m1[k][j][i]);
          }
        }
      }

      printf("\n\nhere the transpose second matrix of 3 x 3 x 3 : \n");

      for (int i = 0; i < 3; i++)
      {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
          printf("\n");
          for (int k = 0; k < 3; k++)
          {
            printf("m2[%d][%d][%d] = %d \t", i, j, k, m2[k][j][i]);
          }
        }
      }

      break;


      case 5:

      printf("\n\nhere the product matrices of 3 x 3 x 3 : \n");

      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          for (int k = 0; k < 3; k++)
          {
            printf("m1[%d][%d][%d] * m2[%d][%d][%d] = %d\n", i, j, k, i, j, k, m1[i][j][k] * m2[i][j][k]);
          }
        }
      }

      break;

      case 6:
         exit(0);

      default:
         printf("you enter invalid input");

    }
  }

}
