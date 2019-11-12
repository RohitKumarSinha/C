#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int, int);
void intro();
void mobile();
void program();

void gotoxy(int col, int row)
{
  COORD c;
  c.X = col;
  c.Y = row;

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void box()
{
  gotoxy(0,0);
  printf("%c", 218);

  gotoxy(78, 0);
  printf("%c", 191);

  gotoxy(0, 24);
  printf("%c", 192);

  gotoxy(78, 24);
  printf("%c", 217);
}

void intro()
{
  box();
  gotoxy(30, 9);
  printf("INTRODUCTION :- ");

  gotoxy(35, 12);
  printf("my name is rohit sinha");

  gotoxy(35, 13);
  printf("i am in graduation");

  gotoxy(35, 14);
  printf("i love programming");

  gotoxy(35, 15);
  printf("i want to learn web development");

  gotoxy(35, 16);
  printf("i am 20 years young");

}

void mobile()
{
  box();
  gotoxy(30, 9);
  printf("MOBILE SPECIFICATION :- ");

  gotoxy(35, 12);
  printf("i have ivoomi mobile");

  gotoxy(35, 13);
  printf("it have 1 gb ram");

  gotoxy(35, 14);
  printf("it have 8 gb rom");

  gotoxy(35, 15);
  printf("it have 455 snapdragron proprocessor");

  gotoxy(35, 16);
  printf("its camera is 5 mp front and 8 mp back");

}

void program()
{
  box();
  gotoxy(30, 9);
  printf("PROGRAMMING LANGUAGE :- ");

  gotoxy(35, 12);
  printf("i learn python");

  gotoxy(35, 13);
  printf("i learn c");

  gotoxy(35, 14);
  printf("i learn HTML");

  gotoxy(35, 15);
  printf("i learn CSS");

  gotoxy(35, 16);
  printf("i learn javascript");

}

int main()
{
  intro();
  getch();

  system("cls");
  mobile();
  getch();

  system("cls");
  program();
  getch();

  system("cls");
  gotoxy(35, 12);
  printf("thank you! for reading this message :");

  return 0;

}
