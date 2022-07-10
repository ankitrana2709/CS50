#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Variable for storing name.
    string answer = get_string("What is your name?\n ");
    // Printing stored name.
    printf("hello, %s\n", answer);
}