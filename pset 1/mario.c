#include <stdio.h>
#include <cs50.h>

//This program creates the pyramid at the end of a level in Mario based on the number a user inputs.

int main(void)
{
    //declare height as global variable
    int height;
    
    //get height from user
    do
    {
    printf("Height: ");
    height = GetInt();
    //validate correct format
    }
    while (height > 23 || height < 0);
   
   //draw a pyramid
   for (int row = 1; row <= height; row++)
   {
       int hashes = row + 1;
       int width = height + 1;
       int spaces = width - hashes;
       
        //print spaces
        for (int i = 0; i < spaces; i++)
        {
               printf(" ");
        }
            
        //print hashes
        for (int i = 0; i < hashes; i++)
        {
            printf("#");
        }
        // print new line
        printf("\n");
       

   }
    
}