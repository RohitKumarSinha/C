#include<stdio.h>
#include<conio.h>

#define VowelisOccur str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' \
|| str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' \
|| str[i] == 'U'

int find_vows(char * str)
{
int i, count = 0;
printf("\nVowels in successions : ");
for (i = 0; str[i] != '\0'; i++)
{
	if (VowelisOccur)/*If first vowel is occur*/
	{
		i++;/*To check next vowel*/
		if (VowelisOccur)/*If second vowel after first if occur*/
		{
			printf("%c%c ", str[i - 1], str[i]);/*Printing two simultaneous vowels*/
			count++;/*Counting Two simultaneous vowels*/
		}
	}
}
return count;
}
int main()
{
	char str[100], tot_vow;
printf("Enter the string : ");
gets_s(str);
tot_vow = find_vows(str);
printf("\n\nTotal number of vowels in successions are : %d\n", tot_vow);
_getch();
return 0;
}
