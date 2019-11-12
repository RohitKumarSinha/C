#include <stdio.h>

int main()
{
  int wind;
  char cat;
  printf("enter the speed of the wind (in miles / hour) : ");
  scanf("%d", &wind);

  if (wind < 73)
          printf("\ncool down man this is not hurricance");

  else if (wind > 73 || wind < 96)
          cat = 'I';

  else if (wind > 95 || wind < 111)
           cat = '2';

  else if (wind > 110 || wind < 131)
            cat = '3';

  else if (wind > 130 || wind < 156)
            cat = '4';

  else
            cat = '5';

printf("\nthe wind speed belongs to the hurricance categories %c", cat);
return 0;
}
