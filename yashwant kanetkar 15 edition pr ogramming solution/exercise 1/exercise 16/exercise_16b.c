#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <windows.h>

void swap(char *a, char *b)
{
  char temp[20];
  strcpy(temp, a);
  strcpy(a, b);
  strcpy(b, temp);
}

void sort_names(char**name_list, int tot_names)
{
  int i, j, k = 0;
  for (i = 0; i < tot_names; i++)
  {
    for (j = i + 1; j < tot_names; j++)
    {
      k = 0;
      while (name_list[i][j] == name_list[j][k])
             k++;
      if (name_list[i][k] > name_list[j][k])
           swap(name_list[j], name_list[i]);
    }
  }
}

int main()
{
  char *nam_list[10], *p, name[20], ans = 'y';
  int i = 0, j = 0, a, b;
  while (ans == 'y')
  {
    printf("\nEnter the name :- ");
    scanf("%s", name);

    p = (char*)malloc(strlen(name));
    strcpy(p, name);

    nam_list[i] = p;
    i++;
    while (getchar() != '\n');
    printf("\nwant to enter another name (y / n) :- ");
    scanf("%c", &ans);
  }

  puts("\n");
  sort_names(nam_list, i);
  system("cls");
  puts("\n\t\t\t names in sorted order are follows .\n\n");
  for (j = 0; j <= i - 1; j ++)
        puts(nam_list[j]);
    return 0;
}
