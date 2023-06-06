
#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
int main(void)
{
  // jesli chcesz wielkie liczby powyzej 2mld, to zmien int na long (longint)
  float x = get_float("x: ");
  float y = get_float("y: ");
  float z = x / y;
  printf("%.2f\n", z);
}