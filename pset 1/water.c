#include <stdio.h>
#include <cs50.h>

//This program tells you how many bottles of water your shower uses, based on the number of minutes you provide.

int main(void)
{
//define variables

    int bottlespermin = 12;
    printf("minutes: ");
    int showerlength = GetInt();
    printf("bottles: %i\n", showerlength*bottlespermin);
}