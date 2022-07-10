#include <cs50.h>
#include <stdio.h>

int main(void)
{
    do
    {
    long number = get_long("Number: ");
    }
    // number must be greater than 0
    while(number < 0);
    if(validity(number))
    {
        print_brand(number);
    }
    else{
        print("INVALID\n");
    }
    //Luhn's Algo
    int no1, no2, no3, no4, no5, no6, no7, no8;
    no1 = ((number % 100) / 10) * 2;
    no2 = ((number % 10000) / 1000) * 2;
    no3 = ((number % 1000000) / 100000) * 2;
    no4 = ((number % 100000000) / 10000000) * 2;
    no5 = ((number % 10000000000) / 1000000000) * 2;
    no6 = ((number % 100000000000000) / 10000000000000) * 2;
    no7 = ((number % 10000000000000000) / 1000000000000000) * 2;
    no8 = ((number % 1000000000000000000) / 1000000000000000) * 2;

    no1 = ((no1 % 100) / 10) + (no1 % 10);
    no2 = ((no2 % 100) / 10) + (no2 % 10);
    no3 = ((no3 % 100) / 10) + (no3 % 10);
    no4 = ((no4 % 100) / 10) + (no4 % 10);
    no5 = ((no5 % 100) / 10) + (no5 % 10);
    no6 = ((no6 % 100) / 10) + (no6 % 10);
    no7 = ((no7 % 100) / 10) + (no7 % 10);
    no8 = ((no8 % 100) / 10) + (no8 % 10);

    int s1 = no1 + no2 + no3 + no4 + no5 + no6 + no7 + no8;

    int no9

}
bool validity(long number)
{
    int len = 0;
    for(int length = 0; number != 0; n /= 10)
        len++;
    if ((len == 13 || len == 15 || len == 16) && sum(number))
        return true;
    else
        return false;
}
int find_length(number)