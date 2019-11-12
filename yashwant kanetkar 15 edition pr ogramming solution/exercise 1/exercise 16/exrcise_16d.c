#include<stdio.h>
#include<Windows.h>

#define VS /*Uncomment this if using Visual Studio*/
//#define TC /*Uncomment this if using Turbo C++*/

#define LEAP (!(yr % 4))/*Checing for leap year*/

int main()
{
int j = 1, a = 7, i, x = 1, nod;
int year, yr, month, m, mon, curr, next = 0;


/*yr is for traversing the year, andn year is the
 year given by the user. mon is for traversing the
 months and month is the month given by user. curr
 contains the starting day of the current 	month
 and next conatains the starting day of the next month.*/


printf("\nEnter the year : ");
scanf("%d", &year);
printf("\nEnter the month : ");
scanf("%d", &month);


#ifdef VS
system("cls");/*clearing screen in visula studio.*/
#endif
#ifdef TC
#endif


for (yr = 1900; yr <= year; yr++)/*Traversing years*/
{
	if (yr < year)
		m = 12; /*It will traverse the all months if
		the year is not what user entered*/
	else
		m = month;/*It will traverse till the month user
		want if the wanted year is encountered.*/

	for (mon = 1; mon <= m; mon++)//traversing all months of the year
	{
		if (mon == 2)/*If the feb is encountered*/
		{
			if (LEAP)
				nod = 29;
			else
				nod = 28;
		}
		else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
		/*Months with 30 days*/
			nod = 30;
		else/*Months with 31 days*/
			nod = 31;
		int i = 1;
		curr = next;/*Current month starts from this day*/
		while (i <= nod)
		/*This will find the day from which next month will start*/
		{
			next++;
			i++;
			if (next == 7)
				next = 0;
		}
	}
}


//x is dates

j = 1, a = 7, i, x = 1;

if (month == 1)
	printf("\n\t\tJanuary");
if (month == 2)
	printf("\n\t\tFebraury");
if (month == 3)
	printf("\n\t\tMarch");
if (month == 4)
	printf("\n\t\tApril");
if (month == 5)
	printf("\n\t\tMay");
if (month == 6)
	printf("\n\t\tJune");
if (month == 7)
	printf("\n\t\tJuly");
if (month == 8)
	printf("\n\t\tAugust");
if (month == 9)
	printf("\n\t\tSeptember");
if (month == 10)
	printf("\n\t\tOctober");
if (month == 11)
	printf("\n\t\tNovember");
if (month == 12)
	printf("\n\t\tDecember");
printf("\t %d\n\n", year);

printf("\n\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");

for (i = 1; x <= nod; i++)
{
	for (j = 1; j <= 7; j++, curr--)
	{
		if (x>9)//maintaining the structure of the calender
			printf("    ");
		else
			printf("     ");

		if (curr>0)//spacing for start the calender from the given day
			printf(" ");
		else//printing of dates begin.
		{
			printf("%d", x);
			if (x <= nod)
				x++;
			if (x>nod)
				break;
		}
	}
	printf("\n\n");//next week

	if (x>nod)
		break;
}
return 0;
}
