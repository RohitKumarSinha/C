#include <stdio.h>

int main()
{
  int a[25], i, n, *p, *s;
  printf("enter 25 integer number :- ");

  for (i = 0; i <= 24; i++, s++)
        scanf("%d", &a[i]);

  p = &a[0]; // first pointer of 0th element

  for (i = 0; i <= 24; i++)
    {
        s = &a[i]; // second pointer point every element one by one

        if (*p > *s) // if first is bigger than second
          *p = *s; // first becomes second

       s++; // second is increment to check with other element
  }

    printf("smallest digit in array is %d\n", *p);

    return 0;
}
