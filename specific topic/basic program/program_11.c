// a program to find out length of the string using strlen

#include <stdio.h>
#include <string.h>

 int main()
 {
   char str[30];
   int len;

   // input the string
   printf("enter the string :- ");
   gets(str);

   // calculate the length of the string using strlen function
   len = strlen(str);

   // print the resule
   printf("the length of your string including white spaces is %d", len);
 }
 
