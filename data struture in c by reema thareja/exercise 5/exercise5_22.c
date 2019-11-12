/* Declare a program to calculate the area of one of the geometric figures - circle, rectangle or a triangle. write
   a function to calculate the area. The function must receive one parameter which is a structure that contains the
   type of figure and the size of the components needed to calculate the area must be a part of a union. Note that a
   circle requires just one component , rectangle requires two components and a triangle requires the size of three
   components to calculate the area */

#include <stdio.h>
#include <string.h>
#include <math.h>

  typedef struct
  {
    float radius;
  }circle;

  typedef struct
  {
    float len;
    float bre;
  }rect;

  typedef struct
  {
    float s1, s2, s3;
  }tri;


  typedef struct
  {
    char fig_name[10];
    union
    {
      circle c1;
      rect r1;
      tri t1;
    };
  }area;

void calculate_area(char name[]);

int main()
{
  char figure_name[10];

  printf("circle, triangle, rectangle in which of these you want to calculate area :- \n");
  scanf("%s", figure_name);

  calculate_area(figure_name);

    return 0;

}


void calculate_area(char name[])
{
  area a1;

  if (strcmp(name, "circle") == 0)
  {
    float pie = 3.14;

    printf("enter the radius of the cirlcle :- ");
    scanf("%f", &a1.c1.radius);

    float res = pie * a1.c1.radius * a1.c1.radius;

    printf("your area circle is  %.2f ", res);
  }

  else if (strcmp(name, "rectangle") == 0)
  {
    printf("enter the length and breadth of the rectangle :- ");
    scanf("%f %f", &a1.r1.len, &a1.r1.bre);

    float res = a1.r1.len * a1.r1.bre;

    printf("your area of triangle is %.2f", res);
  }

  else if (strcmp(name, "triangle") == 0)
  {
    printf("Enter the three sides of the triangle :- ");
    scanf("%f %f %f", &a1.t1.s1, &a1.t1.s2, &a1.t1.s3);

    float s = (a1.t1.s1 + a1.t1.s2 + a1.t1.s2) / 2;
    float res = sqrt((s - a1.t1.s1) * (s - a1.t1.s2) * (s - a1.t1.s1));

    printf("area of triangle is %.2f", res);
  }
}
