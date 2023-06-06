#include <cs50.h>
#include <cs50.c>
#include <stdio.h>
bool check_validity(long long card);
int find_length(long long n);
bool checksum(long long ccn);
void card_brand(long long no);
int main(void)
{
  long long  card_number;
  do 
  {
    card_number = get_long_long("Card number: ");
  } 
  while(card_number < 0 );

  if (check_validity(card_number)== true)
  {
    card_brand(card_number);
  }
  else
  {
    printf("INVALID");
  }
}
bool check_validity(long long card)
{
  int length = find_length(card);

  if ((length == 15 || length == 13 || length == 16) && checksum(card))
    {
      return true;
    }
  else 
  {
    return false;
  }
}

int find_length(long long n)
{
  int len;
  for ( len = 0; n!= 0; n/=10)
  {
    len++;
  }
  return len;
}

bool checksum(long long ccn)
{
  int sum = 0;
  for (int i = 0; ccn != 0; i++, ccn /= 10)
  {
    if ( i %2 ==0)
    {
      sum += ccn % 10;
    }
    else
    {
      int digit = 2 * (ccn % 10);
      sum += digit/10 + digit %10;
    }
  }
  return (sum % 10) == 0;
}

void card_brand(long long no)
{
  if ((no >= 34e13 && no < 35e13) || (no >= 37e13 && no < 38e13))
  {
    printf("Amex\n");
  }
  else if (( no >= 51e14) && (no < 56e14))
  {
    printf("MASTERCARD\n");
  }
  else if ((no >= 4e15 && no < 5e15) || (no >= 4e12 && no < 5e12))
  {
    printf("VISA\n");
  }
  else 
  {
    printf("INVALID\n");
  }
}
