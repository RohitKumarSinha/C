/* write a program to input the element of a two dimensional array. then from this array, make two arrays
   - one that stores all odd elements of two-dimensional array and other that stores all even elements of
    the array */

#include <stdio.h>

int main()
{
  int m1[3][3], count_even = 0, count_odd = 0;

  printf("Enter the matrix of 3 x 3 : \n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("m1[%d][%d] = ", i, j);
      scanf("%d", &m1[i][j]);
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (m1[i][j] % 2  == 0)
          count_even += 1;

      else
         count_odd += 1;
    }
  }

  int m2[count_even], m3[count_odd];

  count_even = 0;
  count_odd = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (m1[i][j] % 2  == 0)
      {
        m2[count_even] = m1[i][j];
        count_even++;
      }

      else
      {
        m3[count_odd] = m1[i][j];
        count_odd++;
      }
    }
  }


  printf("\n\nEven array\n\n");

  for (int i = 0; i < count_even; i++)
  {
    printf("m2[%d] = %d\n", i, m2[i]);
  }

  printf("\n\nodd array\n\n");

  for (int i = 0; i < count_odd; i++)
  {
    printf("m3[%d] = %d\n",i, m3[i]);
  }

  return 0;
}
