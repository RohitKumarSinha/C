#include<stdio.h>

/*********************************/
/* function to tackle arrow keys */
/*********************************/

int getkey() {

union REGS i,o;

while(!kbhit());

i.h.ah=0;
int86 (22,&i,&o);

return (o.h.ah);

}

int main() {


int x,y,i,lastday,key;
int month,year,a;
void box();


printf("Enter month: ");
scanf("%d",&month);

printf("\n\nEnter year: ");
scanf("%d",&year);

/***********************************************/
/*   starting the program with a condition     */
/***********************************************/


if(month<=12 && month>=1 && year>=1900 && year<=2045)  {

do {


/* if up arrow key is hit */


if(key==72) {

if(year+1 > 2045) {
}
else {
year=year+1;  /* increment of year */
}

}


/* if down arrow key is hit */

if(key==80) {

if(year-1 < 1900) {
}
else {
year=year-1;  /* decrement of year */
}

}


/* if left arrow key is hit */

if(key==75) {

if(month-1 < 1){
}
else {
month=month-1;  /* decrement of month */
}

}


/* if right arrow key is hit */

if(key==77) {

if(month+1 > 12){
}

else {
month=month+1;   /* increment of month */
}

	}

x=49,y=9,i=1;             /* calender printing objects */


x = dayfinder(month,year);    /* calculating first day of the month */

lastday = totaldays(month,year);    /* calculating total days of the month*/




box(month,year);       /* drawing boxes and headings of calender */


/*************************/
/* printing the calender */
/*************************/


while(i<=lastday) {

gotoxy(x,y);

printf("%2d",i);

i++;
x+=5;

if(x>52) {    /* if the position of 7 days is covered, again print from
beginning from a new line */

x=22;
y+=2;

 }
}

gotoxy(1,1);  /* moving cursor away from calender */

key=getkey();     /* taking the arrow key input */

} while(key==72 || key==75 || key==77 || key==80);

}

else
printf("Error! invalid input\n");


return 0;

	}
/*********************** main ends ************************/


/**********************************************************/
/* function to find first day of the given month and year */
/**********************************************************/

int dayfinder(int month, int year)

{

int a,day=1;

/* this is a general purpose formula to calculate first day */

a=(14-month)/12;
year=year-a;
month=month+12*a-2;

day=(day+year+(year/4)-(year/100)+(year/400)+((31*month)/12)) % 7;


/* determining the position to print the first day in the calender */

if(day==0)
day=22;

else if(day==1)
day=27;

else if(day==2)
day=32;

else if(day==3)
day=37;

else if(day==4)
day=42;

else if(day==5)
day=47;

else if(day==6)
day=52;

return (day);  /* return the position */

}

/********************************************************/
/* function to draw the boxes, headings of the calender */
/********************************************************/


void box(int m,int y) {


int i,j,k,l;

/*************/
/* inner box */
/*************/

/* corners of inner box */

gotoxy(20,3);
printf("%c",218);

gotoxy(55,3);
printf("%c",191);

gotoxy(55,21);
printf("%c",217);

gotoxy(20,21);
printf("%c",192);

/* boundries of inner box */

for(j=4;j<=20;j++) {

gotoxy(20,j);
printf("%c",179);

gotoxy(55,j);
printf("%c",179);

}


for(i=21;i<=54;i++) {

gotoxy(i,3);
printf("%c",196);

gotoxy(i,21);
printf("%c",196);

}

/*************/
/* outer box */
/*************/

/* corners of outer box */

gotoxy(17,1);
printf("%c",218);

gotoxy(17,23);
printf("%c",192);

gotoxy(58,1);
printf("%c",191);

gotoxy(58,23);
printf("%c",217);

/* boundries of outer box */

for(k=2;k<=22;k++) {

gotoxy(17,k);
printf("%c",179);

gotoxy(58,k);
printf("%c",179);

}


for(l=18;l<=57;l++) {

gotoxy(l,1);
printf("%c",196);

gotoxy(l,23);
printf("%c",196);

}

/********************************************/
/* writing heading on appropriate positions */
/********************************************/


gotoxy(22,6);
printf("Sun");

gotoxy(27,6);
printf("Mon");

gotoxy(32,6);
printf("Tue");

gotoxy(37,6);
printf("Wed");

gotoxy(42,6);
printf("Thu");

gotoxy(47,6);
printf("Fri");

gotoxy(52,6);
printf("Sat");


gotoxy(32,4);

if(m==1)
printf("January %d",y);

if(m==2)
printf("February %d",y);

if(m==3)
printf("March %d",y);

if(m==4)
printf("April %d",y);

if(m==5)
printf("May %d",y);

if(m==6)
printf("June %d",y);

if(m==7)
printf("July %d",y);

if(m==8)
printf("August %d",y);

if(m==9)
printf("September %d",y);

if(m==10)
printf("October %d",y);

if(m==11)
printf("November %d",y);

if(m==12)
printf("December %d",y);


/*************************/
/* printing instructions */
/*************************/

gotoxy(60,16);
printf("%c : Next year",30);

gotoxy(60,18);
printf("%c : Previous year",31);

gotoxy(60,20);
printf("%c : Next month",16);

gotoxy(60,22);
printf("%c : Previous month",17);


}

/***************************************************/
/* function to determine total days of given month */
/***************************************************/

int totaldays(int m,int y) {

int days;

/* for january */

if(m==1)
days=31;

/* for february */

if(m==2) {

if(y%4==0)
days=29;

else
days=28;

}
/* for march */

if(m==3)
days=31;

/* for april */

if(m==4)
days=30;

/* for may */

if(m==5)
days=31;

/* for june */

if(m==6)
days=30;

/* for july */

if(m==7)
days=31;

/* for august */

if(m==8)
days=31;

/* for september */

if(m==9)
days=30;

/* for october */

if(m==10)
days=31;

/* for november */

if(m==11)
days=30;

/* for december */

if(m==12)
days=31;


return days;
}
