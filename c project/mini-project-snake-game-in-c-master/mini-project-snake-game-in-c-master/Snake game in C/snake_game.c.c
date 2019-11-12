// snake game in c

#include <stdio.h> // for function like printf and scanf
#include <windows.h> // for function like system("clr") , gotoxy
#include <stdlib.h> // for function like rand()
#include <conio.h> // for function like getch()

// for arrow like up , down, left , right
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

// declaring the all functions
void control(void);
void move(void);
void gotoxy(int, int);
void mainmenu(void);
void border(void);
void game_setup(void);
void information (void);

// declaring all global variable
int gameover = 0;
int flag;
int height = 21 , width = 79;
int score, count_tail = 0;
int tailx[50];
int taily[50];

int main()
{

  mainmenu(); // calling the mainmenu function
  game_setup(); // calling the game_setup function

  while(!gameover) // looping the function call untill gameover becomes 0
  {
    border();
    control();
    move();
  }

  information(); // lastly call information function to take some input and display some output

  return 0;
}

typedef struct coordinate // making a global structure who has two int type variable
{
  int x;
  int y;

}coordinate;

coordinate head, food, position, prev, prev2; // declaring some coordinate data type vaiable

// making a function gotoxy which helps to move cursor
void gotoxy(int col, int row)
{
  COORD c;
  c.X = col;
  c.Y = row;

  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// making a mainmenu function display the first page
void mainmenu(void)
{
  gotoxy(10, 10);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 welcome to snake game ....");

  gotoxy(10, 12);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 press any key to continue....");

  gotoxy(10, 14);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 If you want to exit the game press Esc....");

  if(getch() == 27)
  {
    system("cls");
    gotoxy(10, 15);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 you are going to exit the game ");
    exit(0);
  }


  else
  {
    system("cls");

    gotoxy(10, 1);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 INSTRUCTIONS :\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(10, 3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Read the INSTRUCTIONS carefully :");

    gotoxy(1, 5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 you have 1 life if you touch the border then your game is over ");

    gotoxy(1, 7);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 you have to eat the fruit which is coming on the screen ");

    gotoxy(1, 9);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 if you succesfully eat the fruit then your score increases at one point ");

    gotoxy(1, 19);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 press any key to continue the game ");

    gotoxy(1, 11);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 press UP arrow to move the Snake UP");

    gotoxy(1, 13);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Press DOWN arrow to move the snake DOWN");

    gotoxy(1, 15);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Press LEFT arrow to move the snake LEFT");

    gotoxy(1, 17);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Press RIGHT arrow to move the snake RIGHT");

    gotoxy(1, 21);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 press Esc to exit the game ");


    if (getch() == 27)
    {
       system("cls");
      gotoxy(20, 10);
      printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2 you are going to exit the program ");
      exit(0);
    }

    else
    {
      system("cls");

      gotoxy(10, 13);
      printf("LOADING THE GAME ");

      gotoxy(10, 14);
        for (int r = 0; r < 20; r++)
        {
        for (int q = 0; q <= 100000000; q++); // loading slowly
             printf("%c", 177);
         }
      }
  }
}


// border function helps to make the border of the game, fruit of the game, snake of the game
void border(void)
{

  system("cls");
  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < width; j++)
    {
      if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
          printf("*");

      else
      {
        if (i == position.x && j == position.y)
            printf("0");

        else if (i == food.x && j == food.y)
             printf("F");

     //making the tail of the snake
        else
        { int ch = 0;
          for (int k = 0; k < count_tail; k++)
          {
            if (i == tailx[k] && j == taily[k])
            {
               printf("o");
               ch = 1;
            }
          }
          if (ch == 0)
            printf(" ");
        }

      }
    }
     printf("\n");
  }

  printf("\n SCORE :- %d", score); // display the score of the game
}


// for set up of the game and generate fruit of the game
void game_setup()
{
  gameover = 0;
  position.x = height / 2;
  position.y = width / 2;

  label1:
  food.x = rand() % 20;
  if (food.x == 0)
      goto label1;

  label2:
  food.y = rand() % 78;
  if (food.y == 0)
      goto label2;

  score = 0;
}

// to see that that you are enter the up , down , left , right arrow not the other button
void control()
{
  if (kbhit())
  {
    switch(getch())
    {
      case RIGHT:
           flag = 1;
           break;

       case LEFT:
           flag = 2;
           break;

       case UP:
           flag = 3;
           break;

      case DOWN:
           flag = 4;
           break;

    case 27:
          gameover = 1;
          break;
    }
  }
}

// for moving the snake and helps that managing the tail of snake in specific direction
void move()
{

  // managing the snake in specific direction
  prev.x = tailx[0];
  prev.y = taily[0];

  tailx[0] = position.x;
  taily[0] = position.y;

  for (int i = 1; i < count_tail; i++)
  {
    prev2.x = tailx[i];
    prev2.y = taily[i];

    tailx[i] = prev.x;
    taily[i] = prev.y;

    prev.x = prev2.x;
    prev.y = prev2.y;
  }

// for moving the snake up, down, left , right
  switch(flag)
  {
    case 1:
       position.y++;
       break;

    case 2:
        position.y--;
        break;

    case 3:
        position.x--;
        break;

    case 4:
         position.x++;
         break;

    default:
        break;
  }

  // if the snake touches the border then the game should be over
  if (position.x <  0 || position.x > height || position.y < 0 || position.y > width)
      gameover = 1;

  // if the snake touches their tail then the game should be over
  for (int i = 0; i < count_tail; i++)
  {
    if (position.x == tailx[i] && position.y == taily[i])
        gameover = 1;
  }

     // if the snake eat the fruit then to generate new fruit
      if (position.x == food.x && position.y == food.y)
      {
        label3:
        food.x = rand() % 20;
        if (food.x == 0)
            goto label3;

        label4:
        food.y = rand() % 78;
        if (food.y == 0)
            goto label4;

        ++score; // increment the score if fruit is eaten
       ++count_tail; // increment the tail of the snake if fruit is eate

     }
}

// to input your name and show the score and name
void information(void)
{
  system("cls");
  char first[20], last[20];

  printf("Enter your first name :- ");
  scanf("%s", &first);

  printf("Enter your last name :- ");
  scanf("%s", &last);

  printf("\n-----------------------------------------------------------");

  printf("\n\n%s %s your SCORE is :- %d ", first, last, score);

  getch();

}
