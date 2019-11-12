/* Declare a structure time that has three fields - hr, min, sec. create two variables start_time and end_time. Input
   their values from the user. Then while start_time does not reach the end_time. display GOOD DAY on the screen */

#include <stdio.h>
#include <windows.h>

int main()
{
  typedef struct
  {
    int hr;
    int min;
    int sec;
  }time;

  time t1, t2;

  printf("print the start time in hh / mm / ss format :- ");
  scanf("%d %d %d", &t1.hr, &t1.min, &t1.sec);

  printf("Enter the end time in hh / mm / ss format :- ");
  scanf("%d %d %d", &t2.hr, &t2.min, &t2.sec);

  while (t1.hr != t2.hr || t1.min != t2.min || t1.sec != t2.sec)
  {
    system("cls");
    printf("GOOD DAY");

    for (int i = 0; i < 100000000; i++);

    t1.sec++;

    if (t1.sec > 60)
    {
      t1.min++;
      t1.sec = 0;
    }

    if (t1.min > 60)
    {
      t1.hr++;
      t1.min = 0;
    }

    if (t1.hr > 24)
    {
      t1.hr = 0;
    }

  }

  return 0;
}
