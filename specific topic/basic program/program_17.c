// program to find the system date

#include <stdio.h>
#include <windows.h> // pre-processor file to SYSTEMTIME

int main()
{
  SYSTEMTIME stime; // declaring a value in SYSTEMTIME
  GetSystemTime(&stime); // passing the adress of variable stime in GetSystemTIme

  // printing the value of date
  printf(" day = %d\tmonth = %d\tyear = %d", stime.wDay, stime.wMonth, stime.wYear);
}
