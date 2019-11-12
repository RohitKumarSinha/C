/* write a program to define a structure for a hotel that has members - name, address, grade, number of rooms, and
   room charges. write a function to print the names of hotels in a particular grade. Also write a function to
   print names of hotels that have room charges less than specified value */

#include <stdio.h>
#include <string.h>

typedef struct
{
  char hotel_name[50];
  char hotel_add[50];
  char hotel_gra[5];
  int no_of_room;
  float room_charge;

}hotel_detail;

void speci_hotel_name (hotel_detail hd[], int);
void speci_hotel_price (hotel_detail hd[], int);

int main()
{
  hotel_detail hd[5];

  for (int hotel = 0; hotel < 5; hotel++)
  {
    printf("Enter the hotel name :- ");
    gets(hd[hotel].hotel_name);

    printf("Enter the hotel address :- ");
    gets(hd[hotel].hotel_add);

    printf("Enter the hotel grade :- ");
    scanf("%s", hd[hotel].hotel_gra);

    printf("Enter the number of room in hotel :- ");
    scanf("%d", &hd[hotel].no_of_room);

    printf("Enter the room charge of the hotel :- ");
    scanf("%f", &hd[hotel].room_charge);

    printf("\n\n");
    fflush(stdin);
  }

   speci_hotel_name(hd, 5);
   speci_hotel_price(hd, 5);
  return 0;
}

void speci_hotel_name(hotel_detail hd[], int hotel)
{
  char speci_grad[5];

  printf("in which grade of hotel you want to search :- ");
  scanf("%s", speci_grad);

  printf("\nso, here is your name of your search : \n\n");

  for (int i = 0; i < hotel; i++)
  {
    if (strcmp(hd[i].hotel_gra, speci_grad) == 0)
    {
       printf("%s\n", hd[i].hotel_name);
    }
  }
}


void speci_hotel_price(hotel_detail hd[], int hotel)
{
  int room_price;

  printf("in which room price of hotel you want to search :- ");
  scanf("%d", &room_price);

  printf("\nso, here is your name of your search : \n\n");

  for (int i = 0; i < hotel; i++)
  {
    if (room_price > hd[i].room_charge )
    {
       printf("%s\n", hd[i].hotel_name);
    }
  }
}
