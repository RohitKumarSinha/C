#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int, int);

void gotoxy(int col, int row)
{
  COORD c;

  c.X = col;
  c.Y = row;

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
  char ch;

  gotoxy(0, 0);
  printf("%c", 218);

  gotoxy(79, 0);
  printf("%c", 191);

  gotoxy(0, 30);
  printf("%c", 192);

  gotoxy(79, 30);
  printf("%c", 217);

  gotoxy(5, 0);
  printf("I give you a brief introduction that what you will topic we discuss in c");

  gotoxy(30, 2);
  printf("let's start the chapter :- ");

  gotoxy(35, 5);
  printf("1. getting started");

  gotoxy(35, 6);
  printf("2. c instruction");

  gotoxy(35, 7);
  printf("3. decision control instruction");

  gotoxy(35, 8);
  printf("4. more complex decision making");

  gotoxy(35, 9);
  printf("5. loop control instruction");

  gotoxy(35, 10);
  printf("6. more complex repititions");

  gotoxy(35, 11);
  printf("7. case control instruction");

  gotoxy(35, 12);
  printf("8. functions");

  gotoxy(35, 13);
  printf("9. pointers");

  gotoxy(35, 14);
  printf("10. recursion");

  gotoxy(35, 15);
  printf("11. data types revisited");

  gotoxy(35, 16);
  printf("12. the c proprocessor");

  gotoxy(35, 17);
  printf("13. arrays");

  gotoxy(35, 18);
  printf("14. multidimensional arrays");

  gotoxy(35, 19);
  printf("15. strings");

  gotoxy(35, 20);
  printf("16. handling multiple strings");

  gotoxy(35, 21);
  printf("17. structures");

  gotoxy(35, 22);
  printf("18. console input/output");

  gotoxy(35, 23);
  printf("19. file input/output");

  gotoxy(35, 24);
  printf("20. more issues in file/output");

  gotoxy(35, 25);
  printf("21. operation on bits");

  gotoxy(35, 26);
  printf("22. miscellaneous features");

  gotoxy(35, 27);
  printf("23. c under linux");

  getch();

  ch = 13;
  if (ch == 13)
  {
    system("cls");
    gotoxy(30, 12);
    printf("your program is end now ");

  }
  return 0;
}
