#include <stdio.h>
#include <windows.h>

void eng_info(char*, char*);

struct engine
{
  char serial[4];
  int yom;
  char mat[50];
  int quantity;
}

maruti[10] = {"AA0", 2005, "iron", 20,
              "BB1", 2007, "almunium",13,
              "BB2", 1992, "stainless steel", 57,
              "CC1", 2005, "steel", 34,
              "CC7", 2010, "steel", 14
            };

int main()
{
  char from[5], to[5];
  printf("\nenter the serial number, from where you want to start the list : ");
  scanf("%s", from);

  printf("\nenter the serial at which you end the list : ");
  scanf("%s", to);

  system("cls");

  eng_info(from, to);
  return 0;
}

void eng_info(char *from, char *to)
{
  char first_letter;
  int last_digit;
  int i;

  printf("\n\t\tEngines information\n");
  for (i = 0; maruti[i].serial[0] != *from; i++)
  while (1)
  {
    printf("\nserial number : %s", maruti[i].serial);
    printf("\nyear of manufacture : %d", maruti[i].yom);
    printf("\nmaterial used : %s", maruti[i].mat);
    printf("\nquantity : %d\n", maruti[i].quantity);

    if (i == 10)
        i = 0;

    i++;

    if (maruti[i].serial[0] == *to && maruti[i].serial[2] == *(to + 2))
    {
      printf("\nserial number : %s", maruti[i].serial);
      printf("\nyear of manufacture : %d", maruti[i].yom);
      printf("\nmaterial used : %s", maruti[i].mat);
      printf("\nquantity : %d", maruti[i].quantity);
      return ;
    }
  }
}
