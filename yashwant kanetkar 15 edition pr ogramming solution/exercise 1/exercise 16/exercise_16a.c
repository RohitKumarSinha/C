#include <stdio.h>
#include <malloc.h>
#include <string.h>
#define LINE 6  // if the number of lines are increased
// so no need to change anything in the program just change LINE macro here

void ser_rep (char **str, char *old, char *news) // **str pointer points the old and news
{
  int i, j, k, m, c; // assign five variable
  j = k = m = i = c = 0; // all variable assign to 0
  char ans[10][100], *p; // ans is a array which hold 10 string of 100 character and p is a pointer

  for (i = 0; i <= LINE - 1; i++) // looping five times
  {
    m = 0;
    c = 0;

    // this loop for traversing the current line character by character
      for (j = 0; str [i][j] != '\0'; ) // str[0][0]
      {
          if (str[i][j] == old[k]) // if the character matches
          {
             k++; // increment the value of k
             c++; // increment the value of c
             if (old[k] == '\0') //if the whole word is found
             {
               // this loop is replacing the word character by character
                  for (k = 0; news[k] != '\0'; k++, m++)
                       ans[i][m] = news[k];

                  j = c;
                  k = 0;
             }
             else // if the character / word in not matched so as it string is copied
             {
                ans[i][m] = str[i][j];
                m++;
                c = j;
                k = 0;
             }
          }
          ans[i][m] = '\0'; // terminates every line by NULL character
          j = k = m = 0; // reinitialization for next line
      }
  }

  for (i = 0; i <= LINE - 1; i++)
  {
      p = (char *)malloc(strlen(ans[i]) + 1);
      // memory needed is 1 mote for full null character.

      str[i] = ans[i]; // this doesn't work because left side is pointer and right side is simple
      // char variable therefore a new pointer p is taken and copied the content of ans[i] and assign to str[i]

      strcpy(p, ans[i]);
      str[i] = p;
  }
}

int main ()
{
  char *str[] = {
            "we will teach you how to ....",
            "move a mountain",
            "level a building",
            "erase the past",
            "make a million",
            "...all through c !"
  };
  char str1[10], str2[10];

  puts("enter the word you want to replace . :- ");
  scanf("%s", str1);

  puts("enter the word you want to put. :- ");
  scanf("%s", str2);

  ser_rep(str, str1, str2);
  for (int i = 0; i <= LINE - 1; i++)
        puts(str[i]);

  return 0;
}
