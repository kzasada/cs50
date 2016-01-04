#include <stdio.h>
#include <cs50.h>
#include <math.h>

//This program tells you the number smallest number of coins that could be used to make change for any given dollar amount.

int main(void)
{
    //global variables for money
    float original = 0;
//    int coins = 0;
    
    //get money from user
    do
    {
        printf("How much change is owed? ");
        original = GetFloat();
    }
    while (original < 0);
    
    //convert float dollars to int cents
    double roundedOriginal = round(original*100);
    int  remainder = (int) roundedOriginal;
    
    //quarters
    int quarters = round(remainder/25);
    remainder = remainder % 25;
    
    //dimes
    int dimes = round(remainder/10);
    remainder = remainder % 10;

    //nickels
    int nickels = round(remainder/5);
    remainder = remainder % 5;

    //pennies
    int pennies = round(remainder);
    
    //print total coins
   printf("%i\n", quarters+dimes+nickels+pennies);
    
}