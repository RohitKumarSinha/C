#include <stdio.h>

int main()
{
  int num[9], i, cs = 0, sum;

  printf("enter the 9 digit ISBN number of book and don't enter right most checksum digit :\n");
  for(i = 0; i <= 8; i++)
  scanf("%d", num);

for (i = 0; i <= 8; i++)
{
  cs = (cs + ((i + 2) * num[i]));
}

sum = cs + cs;
printf("sum = %d\n", sum);

if (sum % 11 == 0)
    printf("valid ISBN Book number");

else
    printf("not valid ISBN Book number");

return 0;
}
