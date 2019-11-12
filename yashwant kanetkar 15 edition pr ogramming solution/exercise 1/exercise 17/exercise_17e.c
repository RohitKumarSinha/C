#include <stdio.h>
void printinfo(struct);

struct employee
{
  int code;
  char name[30];
  int doj[4][3];
}hcl[50] = {
             001, "rohit", 13, 1, 2006,
             004, "ritik", 21,6, 2008,
             102, "sanjay", 12,5, 2012,
             131, "mamta", 16,1,  2014
};

int main()
{
  int i, d[3];
  printf("\nenter the current date (dd mm yyyy) :");
  scanf("%d %d %d", &d[0], &d[1], &d[2]);
  printf("\nemployee with greater than or equal to 3 years of tenure\n\n");
  for (i = 0; i < 4; i++)
  {
    if (d[2] - hcl[i].doj[2] > 3)
            printinfo(hcl[i]);

    else if (d[2] - hcl[i].doj[2] == 3)
    {
      if (d[1] - hcl[i].doj[1] > 0)
              printinfo(hcl[i]);

      else if (hcl[i].doj[1] == d[1])
        {
           if (d[0] - hcl[i].doj[0] >= 0)
                 printinfo(hcl[i]);
        }
    }
  }
  return 0;
}

void printinfo(struct employee e)
{
  printf("\ncode : %d", e.code);
  printf("\nName : %s", e.name);
  printf("\ndate of joining : %d-%d-%d",e.doj[0][0], e.doj[0][1], e.doj[0][2]);
}
