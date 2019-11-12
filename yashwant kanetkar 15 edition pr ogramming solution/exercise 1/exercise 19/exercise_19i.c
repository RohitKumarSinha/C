#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

struct date
{
  int d, m, y;
};

struct employee
{
  char empcode[6];
  char empname[20];
  struct date join_date;
  float salary;
};

// to display list in way they are actually saved in disk
void display(char *)

// to make file before sorting them
void add_info(char*, char*, struct date, float);

// sort by date of joining
void sortbydoj(char *)
void swap(struct employee*, struct employee);

int main()
{
  struct date d = {13, 1, 1995};
  add_info("EMP01", "siraj", d, 50000.00);

  d.d = 17; d.m = 5; d.y = 1994;
  add_info("EMP0P4", "karan", d, 45000.00);

  d.d = 7; d.m = ; d.y = 1994;
  add_info("EMP0P4", "karan", d, 45000.00);

}
