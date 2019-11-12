#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void getkey();
void gotoxy(short, short);
void box(short, short, short, short);

int main()
{
  FILE *fp;
  char str[85];

  int i, j = 1;

  fp = fopen("language.txt", "r");

  if (fp == NULL)
  {
    printf("this file is empty");
    exit(1);
  }

  i = 2;
  while (fgets(str, 76, fp) != NULL)
  {
    gotoxy(1, 0);
    printf("%d", j); // printing the page number here j = 1

    gotoxy(32, 0);
    printf("rohit.txt"); // printing the file name

    gotoxy(15, i);
    printf("%s", str); // printing the file's content here i = 2

    i++; // increment the value of i

    if (i == 4)
    {

      gotoxy(32, i + 4); // here i + 4 = 20 + 4
      printf("press any key ....");

      getkey(); // calling the function getkey
      system("cls");

      box(0, 36, 30, 30);

      i = 2; // re-initializing variable for new page
      j++; // page number incrementation

    }
  }
  getkey();
  system("cls");

  gotoxy(3, 10);
  printf("file ends\n");

  return 0;
}

void getkey()
{
  char ch;
  ch = getch();

  if (ch == 0)
     ch = getch();
 }

 void gotoxy(short col, short row)
 {
   HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
   COORD position = {col, row};
   SetConsoleCursorPosition(h, position);
}

void box(short x1, short y1, short x2, short y2)
{
  int i;

  gotoxy(0, 1);
  printf("%c", 218); // making upper-left corner

  gotoxy(79, 1);
  printf("%c", 191); // making upper - right corner

  gotoxy(0, 23);
  printf("%c", 192); // making lower - left corner

  gotoxy(79, 23);
  printf("%c", 217); // making lower - right corner

  for (i = x1 + 1; i < x2; i++)
  {
    gotoxy(i, y1);
    printf("%c", 196); // this will make upper side of the box

    gotoxy(i, y2);
    printf("%c", 196); // this will make lowe side of the box
  }

  for (i = y1 + 1; i < y2; i++)
  {
    gotoxy(x1, i);
    printf("%c", 179); // this will make left side of the box

    gotoxy(x2, i);
    printf("%c", 179); // this will make right side of the box
  }
}
