#include <stdio.h>

int main()
{
  int ms, choose;

  ms = 21;

  while (ms > 0)
  {
    printf("do you choose 1, 2 3 and 4 matchstick\n");
    scanf("%d", &choose);


    if (choose == 1)
    {
      printf("you choose 1 matchstick\n");
      ms = ms - 1;
    }

    else if (choose == 2)
    {
      printf("you choose 2 matchstick\n");
      ms = ms - 2;
    }

    else if (choose == 3)
    {
      printf("you choose 3 matchstick\n");
      ms = ms - 3;
    }

    else if (choose == 4)
    {
      printf("you choose 4 matchstick\n");
      ms = ms - 4;
    }

    else
    {
      printf("invalid input");
    }

    if (ms > 4)
    {
    ms = ms - 1;
    printf("computer choose 1 matchstick\n");
    }

    else if (ms == 4)
    {
      ms = ms - 3;
      printf("computer choose 3 matchstick\n");
    }

    else if (ms == 3)
    {
      ms = ms - 2;
      printf("computer choose 2 matchstick\n");
    }

    else if (ms == 2)
    {
      ms = ms - 1;
      printf("computer choose 1 matchstick\n");
    }


     printf("remaining matchstick = %d\n", ms);
  }

  printf("you loose the match");
  return 0;
}
