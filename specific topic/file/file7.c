// c progrm to list files in directory

#include <dirent.h>
#include <stdio.h>

int main()
{
  DIR *d;
  struct dirent *dir;
  d = opendir(".");

  if (d)
  {
    while ((dir = readdir(d)) != NULL)
    {
      printf("%s\n", dir->d_name);
    }
    closedir(d);
  }
  return 0;
}
