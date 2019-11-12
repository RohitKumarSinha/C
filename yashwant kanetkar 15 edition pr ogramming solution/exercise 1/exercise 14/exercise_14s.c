#include <stdio.h>

static int error = 0;

void grd(int *a) // checking the 3x3 grids
{
  int i, j, x, p, sum = 0;
  for (p = 0; p <= 54; p += 27) // moving down the grids
  {
    for (x = 0; x <= 6; x += 3) // moving right of the grids
    {
       sum = 0;
       for (i = 0; i <= 18; i+= 9) // moving down the column in a grid
        for (j = 0; j <= 2; j++) // moving right of row in a grids
          sum += *(a + i + j + x + p);

       if (sum != 45)
       {
          error += 1;
          return ;
       }
    }

  }
}

void row (int *a) // checking the rows
{
  int i, j, sum = 0;

  for (i = 0; i <= 72; i += 9) // moving down of the column
  {
    sum = 0; // reinitialization of sum
    for (j = 0; j <= 8; j ++) // moving right of the column
         sum +=  *( a + i + j);
    if (sum != 45)
    {
       error += 1; // if there is error
       return ;
    }
  }
}

void col (int *a) // checking the columns
{
  int i, j, sum = 0;

  for (i = 0; i <= 8; i++) // moving right of the column
  {
    sum = 0; // reinitialization of sum
    for (j = 0; j <= 72; j += 9) // moving down of the column
         sum +=  *( a + i + j);
    if (sum != 45)
    {
       error += 1; // if there is error
       return ;
    }
  }
}

int main()
{
  int gam[9][9] ={

          5, 3, 4, 6, 7, 8, 9, 1, 2,
          6, 7, 2, 1, 9, 5, 3, 4, 8,
          1, 9, 8, 3, 4, 2, 5, 6, 7,
          8, 5, 9, 7, 6, 1, 4, 2, 3,
          4, 2, 6, 8, 5, 3, 7, 9, 1,
          7, 1, 3, 9, 2, 4, 8, 5, 6,
          9, 6, 1, 5, 3, 7, 2, 8, 4,
          2, 8, 7, 4, 1, 9, 6, 5, 3,
          3, 4, 5, 2, 8, 6, 1, 7, 9
  };

  grd(gam[0]);
  row(gam[0]);
  col(gam[0]);

if (error)
     printf("\n\nthe solution of your soduko is wrong");
a
else
    printf("the solution of your soduko is right \n");

  return 0;
}
