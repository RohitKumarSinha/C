#include <stdio.h>
#include <conio.h>
#include <windows.h>

// function to perform withdrawal or depositied
void action(int, int, int);

// print the balance below 100 rupees
void below100();

struct acc_holder
{
  long int acc_num;
  char name[30];
  int bal;
}sbi[200] = {
               1, "siraj", 100000,
               2, "azad", 1233300,
               3, "Deepak", 99,
               4, "rihan", 33,
               5, "rahul", 200000
};

int main()
{
  int accnum, amount, code;

  printf("\nenter your account number : ");
  scanf("%d", &accnum);

  printf("enter 1 for deposit and 0 for withdrawal : ");
  scanf("%d", &amount);

  if (code)
  {
    printf("\nenter amount to be deposited : ");
    scanf("%d", &amount);
  }

  else
  {
    printf("\nenter amount to be withdrawal : ");
    scanf("%d", &amount);
  }
  action(accnum, amount, code);
  system("cls");
  printf("all members with account balance less than 100 are following : ");
  below100();
  return 0;
}

void below100(){
  int i;
  for (i = 0; i < 200; i++)
  {
    if (sbi[i].bal < 100 && sbi[i].bal > 0)
    {
      printf("\nName : %s", sbi[i].name);
      printf("\nAccount number : %d", sbi[i].acc_num);
    }
  }
}

void action(int accnum, int amount, int code)
{
  int i;
  for (i = 0; i < 200; i++)
           if (sbi[i].acc_num == accnum)
                break;

 if (!code)
 {
   if (sbi[i].bal - amount < 100)
   {
     printf("\nthe balance is insufficient for the specified withdrawal");
     return ;
   }
   else
   {
     sbi[i].bal -= amount;
     printf("\nyour new balance is : %d", sbi[i].bal);
   }
 }
 else
 {
   sbi[i].bal += amount;
   printf("\nyour new account balance is : %d", sbi[i].bal);
 }
 getch();
}
