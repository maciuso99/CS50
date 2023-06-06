#include <cs50.h>
#include <cs50.c>
#include <stdio.h>
float average(float total, int amount);

int main(void)
{
  int n = get_int("How many scores?: ");

  float scores[n];
  for (int i = 0; i<n; i++)
  {
    scores[i] = get_float("Score: ");
  }
  float sum = 0;
  for (int x = 0; x < n; x++)
  {
    sum += scores[x];
  }
  float final = average(sum, n);
  printf("Your average score is: %.2f\n",final);
}
float average(float total, int amount)
{
  return total / amount; 
}