#include <stdio.h>

int main()
{
  int class, fail;

    printf("enter the class obtained by you and  input in integer form :- ");
    scanf("%d", &class);
    printf("in how many subject you had fail and input in integer form :- ");
    scanf("%d", &fail);

    switch (class == 1 && fail > 3)
    {
      case 1:
          printf("you does not get any grace");
    }

    switch (class == 1 && fail <= 3)
    {
      case 1:
          printf("you get 5 marks grace in every subject");
    }

    switch (class == 2 && fail > 2)
    {
      case 1:
          printf("you does not get any grace");
    }

    switch (class == 2 && fail <= 2)
    {
      case 1:
          printf("you get 4 marks grace in every subject");
    }

    switch (class == 3 && fail > 1)
    {
      case 1:
          printf("you does not get any grace");
    }

    switch (class == 3 && fail == 1)
    {
      case 1:
          printf("you get 5 marks grace in  subject");
    }



  return 0;
}
