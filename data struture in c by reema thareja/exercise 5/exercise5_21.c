/* Declare a structure POINT. input the coordinate of a point variable and determine the quadrant in which it lies.
   The following table can be used to determine the quadrant

   Quadrant          X                Y

     1             positive         positive
     2             Negative         positive
     3             Negative         Negative
     4             positive         Negative

*/


#include <stdio.h>

int main()
{
  typedef struct
  {
    int x;
    int y;
  }point;

  point p;

  printf("Enter the coordinate x :- ");
  scanf("%d", &p.x);

  printf("Enter the coordinate y :- ");
  scanf("%d", &p.y);

  if (p.x > 0 && p.y > 0)
     printf("point lies in first quadrant ");

  else if (p.x < 0 && p.y > 0)
      printf("point lies in second quadrant ");

  else if (p.x < 0 && p.y < 0)
       printf("point lies in third quadrant ");

  else if (p.x > 0 && p.y < 0)
        printf("point lies in forth quadrant ");

  else if (p.x == 0 && p.y == 0)
       printf("point lies in origin ");

  return 0;
}
