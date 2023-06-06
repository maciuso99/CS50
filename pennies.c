#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <cs50.c>

int main(void)
{
  float amount = get_float("Dollar amount: ");
  int pennies = round(amount * 100);
  printf("Pennies: %i\n", pennies);
}