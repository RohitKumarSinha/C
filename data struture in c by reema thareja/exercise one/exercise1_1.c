/* write a c program to read 10 integers. Display these numbers by printing three numbers in a line
 seperated by commas */

#include <stdio.h>

int main()
{
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

  printf("Enter 10 integers numbers :- \n");
  scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);

  printf("\nYour numbers is : \n");

  printf("%d , %d , %d\n", n1, n2, n3);
  printf("%d , %d , %d\n", n4, n5, n6);
  printf("%d , %d , %d\n", n7, n8, n9);
  printf("%d", n10);

  return 0;
}
