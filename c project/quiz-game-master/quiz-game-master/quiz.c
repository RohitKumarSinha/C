// quiz game in c
// the program asked you several question and you have to give answer if the answer is correct then you
// get one point otherwise a beep sound produce

#include <stdio.h> // for printf(), scanf()
#include <windows.h> // for system("cls")
#include <conio.h> // for getch()

// global variable
int score = 0;

// function declaration
void mainmenu(void);
void question_one(void);
void question_two(void);
void question_three(void);
void question_four(void);
void question_five(void);
void question_six(void);
void question_seven(void);
void question_eight(void);
void question_nine(void);
void total_score(void);

int main()
{
  // calling the function one by one
    mainmenu();
    question_one();
    question_two();
    question_three();
    question_four();
    question_five();
    question_six();
    question_seven();
    question_eight();
    question_nine();
    total_score();
}

// fuction that display the instruction of the quiz
void mainmenu()
{
  system("cls");
  printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2  Welcome to Quiz game \n\n");
  printf("\xB2\xB2\xB2\xB2\xB2\xB2  You have 9 question  \n\n");
  printf("\xB2\xB2\xB2\xB2\xB2\xB2  By every correct question you will give one point \n\n");
  printf("\xB2\xB2\xB2\xB2\xB2\xB2  You have to answer by 1, 2, 3, 4 \n\n");
  printf("\xB2\xB2\xB2\xB2\xB2\xB2  if you want to quit any stage then press Esc \n\n");
  printf("\xB2\xB2\xB2\xB2\xB2\xB2  press any key to continue the game \n\n");
  printf("\xB2\xB2\xB2\xB2\xB2\xB2  press Esc to quit the game \n\n");

  // if a user enter Esc then this block execute and program terminate
  if (getch() == 27)
    exit(0);

}

// first question of the game
void question_one()
{
  system("cls"); // clear the screen
  printf("\t\t\tScore : %d\n\n", score); // display the score
  printf("Q1. who is the god of cricket ?\n\n"); // asking the question
  printf("1. Sachin tendulkar\t\t 2. M.S. Dhoni\n"); // option of the question
  printf("3. Ricky Ponting    \t\t4. Don Bradman"); // option of the question

  if (getch() == 49) // ascii code of 1 is 49 so if user enter 1 then this block execute
  {
    ++score; // increment the score
  }

  else if (getch() == 27) // ascii code of Esc is 27 so if user enter Esc then this block execute
  {
    printf("\a"); // it will make a beep noise
    exit(0); // terminate the program
  }

  else
     printf("\a"); // it will beep a noise
}

// same as question_one() but it have different question , different answer , different solution
void question_two()
{
  system("cls");
  printf("\t\t\tScore : %d\n\n", score);
  printf("Q2. The Weight of diamond is usually measured in what ?\n\n");
  printf("1. Tola \t\t 2. Carat\n");
  printf("3. Maund \t\t4. Troy");

  if (getch() == 50) // ascii code of 2 is 50
  {
    ++score;
  }

  else if (getch() == 27)
  {
    printf("\a");
    exit(0);
  }

  else
     printf("\a");
}

void question_three()
{
  system("cls");
  printf("\t\t\tScore : %d\n\n", score);
  printf("Q3. Which state of india has the shortest coastline ?\n\n");
  printf("1. Goa \t\t       2. Odisha\n");
  printf("3. Maharastra\t\t 4. West Bengal");

  if (getch() == 49)
  {
    ++score;
  }

  else if (getch() == 27)
  {
    printf("\a");
    exit(0);
  }
  else
     printf("\a");
}

void question_four()
{
  system("cls");
  printf("\t\t\tScore : %d\n\n", score);
  printf("Q4. Who is the first Indian Woman wrestler to win a gold medal at the asian Games ?\n\n");
  printf("1. Sakshi malik \t\t       2. Babita kumari\n");
  printf("3. Vinesh Phogat\t\t       4. Kavita Devi");

  if (getch() == 51) // ascii code of 3 is 51
  {
    ++score;
  }

  else if (getch() == 27)
  {
    printf("\a");
    exit(0);
  }

  else
      printf("\a");
}

void question_five()
{
  system("cls");
  printf("\t\t\tScore : %d\n\n", score);
  printf("Q5. Which of these viruses takes it's name from a place in Malaysia ?\n\n");
  printf("1. Nipah \t\t       2. Ebola\n");
  printf("3. Influenza\t\t    4. HIV");

  if (getch() == 49)
  {
    ++score;
  }

  else if (getch() == 27)
  {
    printf("\a");
    exit(0);
  }

  else
     printf("\a");
}

void question_six()
{
  system("cls");
  printf("\t\t\tScore : %d\n\n", score);
  printf("Q6. which of these planets has a solid surface ?\n\n");
  printf("1. Mars \t\t       2. Saturn\n");
  printf("3. Jupiter\t\t     4. Uranus");

  if (getch() == 49)
  {
    ++score;
  }

  else if (getch() == 27)
  {
    printf("\a");
    exit(0);
  }

  else
     printf("\a");
}

void question_seven()
{
  system("cls");
  printf("\t\t\tScore : %d\n\n", score);
  printf("Q7. According to the Mahabharat, who was the father of chitrasena, vrishasena and satyasena ?\n\n");
  printf("1. Arjuna \t\t       2. Yudhishthira\n");
  printf("3. Dhritarashtra\t\t 4. karna");

  if (getch() == 52) // ascii code of 4 is 52
  {
    ++score;
  }

  else if (getch() == 27)
  {
    printf("\a");
    exit(0);
  }

  else
      printf("\a");
}

void question_eight()
{
  system("cls");
  printf("\t\t\tScore : %d\n\n", score);
  printf("Q8. How Many times Australia win world cup ?\n\n");
  printf("1. one \t\t       2. two\n");
  printf("3. three\t\t      4. five");

  if (getch() == 52)
  {
    ++score;
  }

  else if (getch() == 27)
  {
    printf("\a");
    exit(0);
  }

  else
     printf("\a");
}

void question_nine()
{
  system("cls");
  printf("\t\t\tScore : %d\n\n", score);
  printf("Q9. when google company is established ?\n\n");
  printf("1. 1998 \t\t       2. 1990\n");
  printf("3. 1999 \t\t       4. 2000  ");

  if (getch() == 49)
  {
    ++score;
  }

  else if (getch() == 27)
  {
    printf("\a");
    exit(0);
  }

  else
     printf("\a");
}

// input the name of user and display the score and name
void total_score()
{
  system("cls");

  char name[30];
  printf("Enter your name :- ");
  gets(name); // get the name if tab or space is entered

  printf("\n\n%s score %d", name, score);
}
