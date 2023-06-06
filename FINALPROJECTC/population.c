#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <cs50.c>

int main(void)
{
  int x;
  do
  {
    x = get_int("Population: ");
  }
  while (x < 9 );

  int y;
  do
  {
    y = get_int("End Population: ");
  }
  while (y <= x );

  int counter = 0;

  while ( x < y )
  {
    int n = (x/3) - (x/4);

    x += n;

    counter++;
  }
  printf("years needed: %i\n", counter);

  //for (int i= 0; ;i++)s
  
  //{
    //if ( x < y)    
    //{
     //int n = (x/3) - (x/4); 
      //x += n;
      //printf("years needed: %i\n", i);
    //}
  //}
}