// program to reverse a string without strrev function
#include <stdio.h>

int main()
{
   char ch[30], c;
   int l, i;

   // input the string
   printf("enter a string :- ");
   gets(ch);  // handle multiple string

   // calculate the length of the string
   for (l = 0; ch[l]; l++);

   // swapping the character from its corresponding first and last character
   for (i = 0; i <= l/2; i++)
   {
     c = ch[i];
     ch[i] = ch[l - 1- i];
     ch[l - 1 - i] = c;
   }

   // print the reverse string
   printf("\nreverse string is %s",ch);
}
