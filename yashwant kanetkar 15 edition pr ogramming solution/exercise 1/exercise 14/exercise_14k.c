#include <stdio.h>
void swap(int *);

int main()
{
  int p[4][5];
  int i, j;

  // enter the data for matrix
  for (i = 0; i <= 3; i++)
  {
    printf("enter the %d row element :\n", i);
    for (j = 0; j <= 4; j++)
    {
      scanf("%d", &p[i][j]);
    }
  }

  // print matrix as entered
  for (i = 0; i <= 3; i++)
  {
    printf("the %d row element :\n", i);
    for (j = 0; j <= 4; j++)
    {
      scanf("%d", &p[i][j]);
    }
  }

    printf("\n");

    // function call to left shift row
    swap(p[0]);  // base address of array passed to function

    // print new matrix after left shifting
    printf("\n\n Matrix after left shifting to row element :", i);
    for (i = 0; i <= 3; i++)
    {
      printf("\n\nenter the %d row element :\n", i);
      for (j = 0; j <= 4; j++)
      {
        printf("\t%d", p[i][j]);
      }
    }

  return 0;
}

// finction for left shifting of the rows
void swap(int *p)
{
  int k, i,  tt, t, j;
  for (k = 0; k <= 3; k++) // 4 rows to be shifted
  {
    for (i = 0; i <= 1; i++) // shifting done twice
    {
      t = *(p + k * 5 + 0);
      for (j = 0; j <= 3; j++)
      {
        tt = *(p + k * 5 + j);
        *(p + k * 5 + j) = *(p + k * 5 + j + 1);
        *(p + k * 5 + j + 1) = tt;
      }
      *(p + k * 5 + j) = t;
    }
  }
}
