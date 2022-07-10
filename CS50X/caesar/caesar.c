#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //To eliminate Wrong syntax.
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //To eliminate wrong data type.
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //input string to int.
    int k = atoi(argv[1]);
    string plaintext = get_string("plaintext:  ");
    printf("ciphertext: ");
    //Checking every single char of plaintext
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            //To Cipher Uppercase
            printf("%c", (plaintext[j] + k - 65) % 26 + 65);
        }
        //To Cipher Lowercase
        else if (islower(plaintext[j]))
        {
            printf("%c", (plaintext[j] + k - 97) % 26 + 97);
        }
        //To keep other symbols same.
        else
        {
            printf("%c", plaintext[j]);
        }
    }
    printf("\n");
    return 0;
}