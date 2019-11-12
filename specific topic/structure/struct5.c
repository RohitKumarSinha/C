#include <stdio.h>

int main()
{
  struct time
  {
    int hour, minute, second;
  };

  struct time t1, t2;

  printf("enter the hour, minute and second of first time :- ");
  scanf("%d%d%d", &t1.hour, &t1.minute, &t1.second);

  printf("enter the hour, minute and second of second time :- ");
  scanf("%d%d%d", &t2.hour, &t2.minute, &t2.second);

  if ((t1.hour <= 12 && t1.minute <= 60 && t1.minute <= 60) && (t2.hour <= 12 && t2.minute <= 60 && t2.second))
    printf("differce between hour is %d minute is %d and second is %d", t2.hour - t1.hour, t2.minute - t1.minute, t2.second - t1.second);

   else
      printf("wrong input");

  return 0;
}
