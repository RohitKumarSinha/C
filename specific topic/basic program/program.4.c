#include <stdio.h>
#include <conio.h>

int main()
{
   int  x;

   x = getnumber();
   printf("\nyou enter %d :- ", x);
}

int getnumber()
{
  int n = 0, ch;
  do
{
  ch = getch(); // the number you enter is converted into ascii values with the help of getch and stored in ch variable
  if (ch >= 48 && ch <= 57) // if ascii value of that number is between 48 to 57 then if block run
  {
    printf("%c", ch); // print that number in character format to make it from 0 to 9
    n = (n * 10) + (ch - 48); // shifting the value at one place and make the value 0 to 9
  }
    if (ch == 13) // if we enter the enter button then the program teminate
      break;

}
while(1);
    return (n); // return the value from 1 to 9
}
