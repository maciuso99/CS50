#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <cs50.c>
#include <ctype.h>

int main(void)
{
  string s = get_string("before: ");
  printf("after: ");
  for (int i = 0, n = strlen(s); i < n; i++)
  {
    if (islower(s[i]))    
    {
      printf("%c", toupper(s[i]));
    }
    else
    {
      printf("%c", s[i]);
    }
  }
} 