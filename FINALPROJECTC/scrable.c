#include <cs50.c>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int licz_score(string word);

int main(void)
{
  string player1 = get_string("Gracz 1: ");
  string player2 = get_string("Gracz 2: ");
  
  int score1 = licz_score(player1);
  int score2 = licz_score(player2);

  if ( score1 > score2 ) 
  {
    printf("Player 1 wins");
  }
  else if ( score1 < score2 ) 
  {
    printf("Player 2 wins");
  }
  else
  {
    printf("Tie !");
  }
}

int licz_score(string word)
{
  int POINTS[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
  int score = 0; 
  int dlugo = strlen(word);
  for (int x = 0; x < dlugo; x++)
  {
    if(isupper(word[x]))
    {
      score += POINTS[word[x] - 'A'];
    }
    else if (islower(word[x]))
    {
      score += POINTS[word[x] - 'a'];
    }
      return score;
  }

}
