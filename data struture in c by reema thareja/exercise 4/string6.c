/* write a program to count the number of digits, uppercase characters, lower case characters, and special
   characters in a given string */

#include <stdio.h>

int main()
{
  char text[100];
  int digits = 0, upper = 0, lower = 0, special_ch = 0, asci_value = 0, i = 0;

  printf("enter the string :- ");
  gets(text);


  while (text[i] != '\0')
  {

    printf("%d\n", text[i]);

    if (asci_value >= 48 && asci_value <= 57)
    {
      digits++;
    }

    else if (asci_value >= 65 && asci_value <= 90)
    {
      upper++;
    }

    else if (asci_value >= 32 && asci_value <= 64)
    {
      lower++;
    }

    else if (asci_value >= 0 && asci_value <= 30)
    {
      special_ch++;
    }

    i++;
  }

  printf("Digits = %d\n", digits);
  printf("lower case = %d\n", lower);
  printf("upper case = %d\n", upper);
  printf("special characters = %d\n", special_ch);

  return 0;
}
