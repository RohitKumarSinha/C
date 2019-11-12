/* write a program to read two floating point number arrays. Merge the two arrays and display the resultant
  array in reverse order */

#include <stdio.h>

int main()
{
  float m1[3], m2[3];

  for (int i = 0; i < 3; i++)
  {
    printf("m1[%d] = ", i);
    scanf("%f", &m1[i]);
  }

  for (int i = 0; i < 3; i++)
  {
    printf("m2[%d] = ", i);
    scanf("%f", &m2[i]);
  }

  float m3[3];

  for (int i = 0; i < 3; i++)
  {
    m3[i] = m1[i] + m2[i];
  }

  printf("\n\nMerging arrays in normal order :\n\n");

  for (int i = 0; i <= 2; i++)
  {
    printf("%.2f\t", m3[i]);
  }

  printf("\n\nMerging arrays in reverse order :\n\n");

  for (int i = 2; i >= 0; i--)
  {
    printf("%.2f\t", m3[i]);
  }

  return 0;
}
