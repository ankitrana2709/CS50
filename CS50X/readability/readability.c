#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //Getting Input text
    string text = get_string("Text: ");
    //defining parameters and calculating index.
    float L = count_letters(text) / (float) count_words(text) * 100 ;
    float S = count_sentences(text) / (float) count_words(text) * 100 ;
    int index = round(0.0588 * L - 0.296 * S - 15.8) ;
    //Index less than 1
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    //Index greater than 16
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    //Index between 1 and 16
    else
    {
        printf("Grade %i\n", index);
    }
    /*If you want to print letters, words and sentences as well; REMOVE COMMENTS.
    printf("%i letters\n%i words\n%i sentences\n", count_letters(text), count_words(text), count_sentences(text));*/
}
//Counting letters here
int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}
//Counting words here
int count_words(string text)
{
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}
//Counting sentences here
int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
    return sentences;
}