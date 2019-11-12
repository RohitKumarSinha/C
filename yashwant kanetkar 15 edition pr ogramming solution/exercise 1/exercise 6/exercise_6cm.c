#include <stdio.h>

int main()
{
  int hours;

  for (hours = 0 ; hours <= 24; hours += 1)
  {
    if ((hours <= 11) || (hours == 24))
    {
      printf("\n%d A.M", hours);

      if ((hours <= 4) || (hours == 24))
      {
        printf("  midnight");
      }

      else if (hours > 4)
      {
        printf("   morning");
      }
    }

    else
    {
      printf("\n%d P.M", hours);

      if (hours <= 16)
      {
        printf("  noon");
      }

      else if (hours > 16)
      {
        printf("  evening");
      }
    }
  }
  return 0;
}
