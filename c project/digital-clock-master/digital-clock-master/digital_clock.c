//c program for digital clock

#include <stdio.h>
#include <windows.h> // for the function like sytem(cls)
#include <time.h> // for function like clock()
#include <stdlib.h> // for function like exit()

// declaration of all function
 void gotoxy();
 void delay();

 int main()
 {
   int h = 0, m = 0, s = 0;

   // taking input from user
   printf("Enter the time in hh :: mm :: ss format \n");
   scanf("%d %d %d", &h, &m, &s);

   // checking that user enter a right input or not
   if ((h < 0 || h > 23) || (m < 0 || m > 59) || (s < 0 || s > 59))
    {
      printf("invalid input");
      exit(0);
    }

   // looping the hour
   for (h; h <= 24; h++)
   {
     if (h == 24)
     {
       h = 0;
     }
     // looping the minute
     for(m; m < 60; m++)
     {
       // looping the second
       for (s; s < 60; s++)
       {
         system("cls"); // clear the screen
         gotoxy(38, 12); // cursor position
         printf("%d : %d : %d", h, m, s); // printing the time
         delay(1); // delay every one second
       }
       s = 0; // if second goes to 60 then reinitialize its value to 0
     }
     m = 0; // if minute goes to 60 then reinitialize its value to 0
   }
   return 0;
 }

// define the function gotoxy
 void gotoxy(int col, int row)
 {
   COORD c;

   c.X = col;
   c.Y = row;

   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// define the function delay
void delay(int number_of_seconds)
{
  // converting time into milli_seconds
   int milli_seconds = 1000 * number_of_seconds;

   // storing start time
   clock_t start_time = clock();

   // looping till required time is not achevied
   while (clock() < start_time + milli_seconds);
}
