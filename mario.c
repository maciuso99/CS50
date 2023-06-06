#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

int main(void)
{
  int n;
  do
  {
    n = get_int("Width: ");
  }
  while (n < 1);

  for (int i = 0; i < n; i++)
  {
    printf("?");
  }
  printf("\n");

  int x;
  do
  {
    x = get_int("Size: ");
  }
  while (x < 1);

  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < x; j++)
    {
      printf("#");
    }
    printf("\n");
  }
  
}