/*A simple project to recreate the blocks of pyramid from the Super Mario Brother's game. 
Here we shall be using # to represent the bricks in our C program*/

//Include the header files
#include<cs50.h>
#include<stdio.h>

void pyramid(int); //function declaration

int main(void)
{
    int height; //height variable for the pyramid
    
    do
    {
        height = get_int("Height: "); //prompts the user to enter the height of the pyramid
    }
    while (height < 1 || height > 8);
    
    pyramid(height);
}

//A function to print the pyramid
void pyramid(int h)
{
    int j = 0, k = 0, l = 0, m = 0;
    
    for (int i = h; i > 0; i--)//keeps count for the number  of rows
    {
        //to fill the column
        for (j = 0; j < i - 1; j++)
        {
            printf(" ");
        }
        
        for (k = j; k < h; k++)
        {
            printf("#");
        }
        
        for (l = k; l < k + 2; l++)
        {
            printf(" ");
        }
        
        for (m = j; m < h; m++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}
