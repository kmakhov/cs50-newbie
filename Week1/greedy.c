#include <stdio.h>
#include <cs50.h>

int main()
{
    int coins = 0;
    int cents;
    float money;

        printf("Money: ");
        money = GetFloat();
    
    cents = money * 100;
    
        while (cents >= 25)
        {
            cents = cents - 25;
            coins++;
        }

        while (cents >= 10)
        {
            cents = cents - 10;
            coins++;
        }

        while (cents >= 5)
        {
            cents = cents - 5;
            coins++;
        }

        while (cents > 0)
        {
            cents = cents - 1;
            coins++;
        }
    printf("%d\n", coins);
}
