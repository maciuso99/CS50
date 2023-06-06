#include <cs50.h>
#include <cs50.c>
#include <stdio.h>

int main(void)
{
    const int my_points = 2;
    int points = get_int("How many points did you lose? ");

    if (points < my_points )
    {
      printf("You lost fewer points than me \n");
    }
    else if (points > my_points)
    {
      printf("You lost more points than me :0 \n");
    }
    else
    {
      printf("You lost as much points as I did xd \n");
    }
}