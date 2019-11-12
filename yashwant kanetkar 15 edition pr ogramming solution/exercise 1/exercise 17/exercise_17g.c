#include <stdio.h>

struct dmy
{
  int date;
  int month;
  int year;
};

int datcmp(struct dmy a, struct dmy b)
{
  if (a.date == b.date && a.month == b.month && a.year == b.year)
              return 0;

  else
              return 1;
}

int main()
{
  struct dmy a, b;
  int flag;

  printf("\nenter the first date (dd mm yyyy) : ");
  scanf("%d %d %d", &a.date, &a.month, &a.year);

  printf("\nenter the second date (dd mm yyyy) :");
  scanf("%d %d %d", &b.date, &b.month, &b.year);

  flag = datcmp(a, b);

  if (flag)
        printf("\nthe dates are not same");

  else
      printf("\nthe dates are same");

  return 0;
}
