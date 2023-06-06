#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <cs50.c>

int main(void)
{
  string s = get_string("Input: ");
  printf("Output: ");
  int length = strleng(s);
  for (int i = 0; i < length; i++)
  {
    printf("%c", s[i]);

  }
  printf("\n");

}