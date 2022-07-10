#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // Setting parameters for what to accept.
    while (n < 1 || n > 8) ;
    // setting of rows.
    for (int i = 0; i < n ; i++)
    {
        // for correct spacing.
        for (int k = 0 ; k < n - i - 1 ; k++)
        {
            printf(" ");
        }
        // setting of coloumns.
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}