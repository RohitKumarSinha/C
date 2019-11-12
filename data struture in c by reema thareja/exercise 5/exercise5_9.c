// write a program to add and subtract 10hrs 20mins 50sec and 5hrs 30min 40sec

#include <stdio.h>

typedef struct
{
  int hour;
  int minute;
  int second;

}time;

int main()
{
  time t1, t2, t3;

  printf("enter the first hour minute and time in hh mm yy format :- ");
  scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);

  printf("enter the second hour minute and time in hh mm yy format :- ");
  scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);

  t3.hour = t1.hour + t2.hour;
  t3.minute = t1.minute + t2.minute;
  t3.second = t1.second + t2.second;

  if (t3.second > 60)
  {
    t3.minute += t3.second / 60;
    t3.second = t3.second / 60;
  }

  if (t3.minute > 60)
  {
    t3.hour += t3.minute % 60;
    t3.minute = t3.minute / 60;
  }

  if (t3.hour > 24)
  {
    t3.hour = t3.hour / 24;
  }

  printf("\n\nafter adding the time hour = %d minute = %d second = %d\n\n", t3.hour, t3.minute, t3.second);

  return 0;
}
