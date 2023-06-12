// James Lee
// CS50 Week 1: C
// 12/6/2023


#include <cs50.h>
#include <stdio.h>

int main(void)
{
// user input height 1 - 8, else repeat
    int h;
    do
    {
        h = get_int("Height (1-8): \n");
    }
    while
    ((h < 1) || (h > 8));

// for loop to create the height of the row
    for (int row = 0; row < h; row++)
    {
// for loop to create the width of the pyramid
        for (int col = 0; col < h; col++)
        {
// row / column
            if (row + col >= h - 1)
            printf("#");
            else
            printf(" ");
        }
        printf("\n");
    }
}
