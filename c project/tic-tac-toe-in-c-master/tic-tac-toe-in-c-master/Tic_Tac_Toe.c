// a tic_tac_toe game in c

#include <stdio.h>
#include <windows.h>
#include <conio.h>

// declaring some functions
void tic_tac_toe_setup();
void input_game();
void check_game();
void assing_symbol();

// declaring some global variable
int player1_score = 0;
int player2_score = 0;

char symbol[8];

int main()
{
  system("cls");
  assing_symbol();
  tic_tac_toe_setup();
  input_game();
  return 0;
}


void tic_tac_toe_setup()
{
  printf("\t\t\t\tTic Tac Toe\n\n");
  printf("\n\nplayer1 score :- %d\t\t\t    player2 score :- %d\n\n", player1_score, player2_score);
  printf("Player 1's symbol : x\n");
  printf("Player 2's symbol : 0\n\n");

  printf("\t\t\t |\t\t |\t\t ");
  printf("\n\t\t%c\t |\t%c\t |\t%c\t", symbol[0], symbol[1], symbol[2]);
  printf("\n\t\t----------------------------------");
  printf("\n\t\t\t |\t\t |\t\t ");
  printf("\n\t\t%c\t |\t%c\t |\t%c\t", symbol[3], symbol[4], symbol[5]);
  printf("\n\t\t----------------------------------");
  printf("\n\t\t\t |\t\t |\t\t");
  printf("\n\t\t%c\t |\t%c\t |\t%c\t", symbol[6], symbol[7], symbol[8]);
}

void check_game()
{
  int change;

  while (1)
  {
    if (symbol[0] == '1' || symbol[1] == '2' || symbol[2] == '3' || symbol[3] == '4' || symbol[4] == '5' || symbol[5] == '6' || symbol[6] == '7' || symbol[7] == '8' || symbol[8] == '9')
    {
      system("cls");
      tic_tac_toe_setup();
      check_game();
      player1:
      printf("\nplayer 1: Enter in which position you want to change :- ");
      scanf("%d", &change);

      if (symbol[change - 1] == 'x' || symbol[change - 1] == '0')
      {
        printf("invalid position ");
        goto player1;
      }

      else
      {
        symbol[change - 1] = 'x';
      }

      system("cls");
      tic_tac_toe_setup();
      check_game();
      if (symbol[0] == '1' || symbol[1] == '2' || symbol[2] == '3' || symbol[3] == '4' || symbol[4] == '5' || symbol[5] == '6' || symbol[6] == '7' || symbol[7] == '8' || symbol[8] == '9')
      {

        player2:
        printf("\nPlayer 2: Enter in which position you want to change :- ");
        scanf("%d", &change);

        if (symbol[change - 1] == 'x' || symbol[change - 1] == '0')
        {
          printf("invalid position");
          goto player2;
        }

        else
        {
          symbol[change - 1] = '0';
        }
      }
    }

  }
}

void check_game()
{
  if ((symbol[0] == 'x' && symbol[1] == 'x' && symbol[2] == 'x') || (symbol[3] == 'x' && symbol[4] == 'x' && symbol[5] == 'x') || (symbol[6] == 'x' && symbol[7] =='x' && symbol[8] == 'x') || (symbol[0] == 'x' && symbol[3] == 'x' && symbol[6] == 'x') || (symbol[1] == 'x' && symbol[4] == 'x' && symbol[7] == 'x') || (symbol[2] == 'x' && symbol[5] == 'x' && symbol[8] == 'x') || (symbol[0] == 'x' && symbol[4] == 'x' && symbol[8] == 'x') || (symbol[2] == 'x' && symbol[4] == 'x' && symbol[6] == 'x'))
  {
    
    printf("\n\nplayer 1 Win");
    player1_score++;

    printf("\n\npress Esc to over the game or press any key to continue the game");
    if (getch() == 27)
        exit(0);

    else
       main();
  }

  else if((symbol[0] == '0' && symbol[1] == '0' && symbol[2] == '0') || (symbol[3] == '0' && symbol[4] == '0' && symbol[5] == '0') || (symbol[6] == '0' && symbol[7] =='0' && symbol[8] == '0') || (symbol[0] == '0' && symbol[3] == '0' && symbol[6] == '0') || (symbol[1] == '0' && symbol[4] == '0' && symbol[7] == '0') || (symbol[2] == '0' && symbol[5] == '0' && symbol[8] == '0') || (symbol[0] == '0' && symbol[4] == '0' && symbol[8] == '0') || (symbol[2] == '0' && symbol[4] == '0' && symbol[6]=='0'))
  {

    printf("\n\nplayer 2 Win");
    player2_score++;

    printf("\n\npress Esc to over the game or press any key to continue the game");
    if (getch() == 27)
        exit(0);

    else
       main();
  }
}

void assing_symbol()
{
  symbol[0] = '1';
  symbol[1] = '2';
  symbol[2] = '3';
  symbol[3] = '4';
  symbol[4] = '5';
  symbol[5] = '6';
  symbol[6] = '7';
  symbol[7] = '8';
  symbol[8] = '9';
}
