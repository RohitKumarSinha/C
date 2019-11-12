#include<stdio.h>
#include<windows.h>

void gotoxy(int, int);
int main()
{
  gotoxy(20, 1);
  printf("my name is rohit sinha");
  gotoxy(20, 2);
  printf("i am in graduation");

  return 0;
}


void gotoxy(int col, int row)
{
  COORD c;
  c.X = col;
  c.Y = row;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
