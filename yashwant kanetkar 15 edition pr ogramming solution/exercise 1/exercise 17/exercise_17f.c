#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

// count total number of book in the library
int count ();

void display (int);

// if the author name is same so the function strcmp returns a zero
void giv_author(char*);
void adbuk ();

// appears the tittle of the specified book
void which1 (int);

// display all the books serially accession number
void albuk();

struct library
{
  int an; // accession number
  char tittle[50];
  char author[30];
  int price;
  int flag; // flag = 0 : issued and, flag = 1: not issused
}geclib[50] = {
                1, "let us c", "yashvant kanetkar", 255, 1,
                2, "data structure through c", "yashvant kanetkar", 300, 1,
                3, "let us c++", "yashvant kanetkar", 200, 1,
                4, "harry potter", "j k rowling", 550, 0,
                5, "the hard way", "rohti sinha", 200, 1,
                6, "python cookbook", "ritik", 300, 0
};

int main()
{
  int ans = 1, an;
  char auth[30];
  while(ans != 7)
  {
    system("cls");
    printf("\nyou are in menu section");
    printf("\n1. add book information");
    printf("\n2. display book information");
    printf("\n3. list all book of given author");
    printf("\n4. list all tittle of specified book");
    printf("\n5. list the counts of the book in library");
    printf("\n6. list all book in order of accession number");
    printf("\n7.exit");
    printf("\n\n\t enter your choice : ");
    scanf("%d", &ans);

    switch (ans)
    {
      case 1:
           adbuk();
           getch();
           break;

      case 2:
            printf("\nenter the accession number of the book : ");
            scanf("%d", &an);
            getch();
            break;

      case 3:
           while (getchar() != '\n');
           printf("\nenter the name of the authour of the book :");
           gets(auth);
           getch();
           break;

    case 4:
          printf("\nenter the accession number of your book :");
          scanf("%d", &ans);
          which1(an);
          getch();
          break;

    case 5:
          printf("\ntotal number of books : %d", count());
          getch();
          break;

    case 6:
          albuk();
          getch();
          break;

    case 7:
          return 0;

    default:
          printf("\nwrong choice try again");
          getch();
    }
  }
  return 0;
}

int count()
{
  int i = 0;
  while (geclib[i].an)
      i++;

return i;
}

void display(int i)
{
  i--; // to use i as index
  printf("\n\n accession number : %d", geclib[i].an);
  printf("\ntittle : %s", geclib[i].tittle);
  printf("\nauthor : %s", geclib[i].author);
  printf("\nprice : %d", geclib[i].price);

  if (geclib[i].flag) // flag : 0
            printf("\nstatus : issued");

  else
        printf("\nstatus : available"); // flag : 1
}

void giv_author(char *author)
{
  int i = 0;
  printf("\nBooks of %s are following : \n\n", author);

  while (geclib[i].an)
  {
  if (!(strcmp(author, geclib[i].author)))
           display(geclib[i].an);

    i++;
  }
}

void adbuk()
{
  int next = count();
  geclib[next].an = next + 1;

  // fflush(stdin) or while (getch() != '\n'); to clear the buffer
  while (getchar() != '\n');
  printf("\nenter the tittle of the book :");
  get(geclib[next].tittle);

  printf("\nenter the author name of the book :");
  get(geclib[next].author);

  printf("\nenter the price of the book :");
  scanf("%d", &geclib[next].price);

  geclib[next].flag = 1;
  system("cls");
}

void which1(int an)
{
  int i = 0;
  while (geclib[i].an)
  {
    if (geclib[i].an == an)
    {
      printf("\ntittle of the book : %s",geclib[i].tittle);
      return ;
    }
  }
  printf("no any book found found\n");
}

void albuk()
{
  int i = 0;
  while (geclib[i].an)
  {
    display(i + 1);
    i++;
  }
}
