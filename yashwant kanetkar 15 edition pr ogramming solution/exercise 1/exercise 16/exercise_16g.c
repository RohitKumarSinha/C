#include<stdio.h>
#include<conio.h>
#include<string.h>

#define Space 32
#define (line[i] == 't' || line[i] == 'T') && (line[i + 1] == 'h' || \
line[i + 1] == 'H') && (line[i + 2] == 'E' || line[i + 2] == 'e') && \
(line[i + 3] == Space || line[i + 3] == '\0'

void del_the(char *line)
{
int i, j;
for (i = 0; line[i] != '\0'; i++)
	if ()/*if The is encounter*/
		for (j = i; line[j] != '\0'; j++)
			line[j] = line[j + 4];/*The word is skipped and other words are saved in the string*/
}
int main()
{
char line[80];
puts("Enter the line");
gets_s(line);
del_the(line);
puts("\nAfter removing all the words 'The'.\n\n");
puts(line);
_getch();
return 0;
}
