#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

int main(void)
{
  char c = get_char("Do you agree? y or n ");
  if(c=='y' || c=='Y')
  {
    printf("Agreed.\n");
  } 
  else if(c=='n' || c=='N')
  {
    printf("Not agreed.\n");
  }
}