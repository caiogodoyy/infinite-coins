#include <stdio.h>

void makeChange(int n);

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("[");
    makeChange(n);
    printf("]");
    return 0;
}

void makeChange(int n)
{
    int quarters = 0;
    int maxQuarters = n / 25;
    while (maxQuarters >= quarters)
    {
        int dimes = 0;
        int rest = n - quarters * 25;
        int maxDimes = rest / 10;
        while (maxDimes >= dimes)
        {
            int nickels = 0;
            int rest2 = rest - dimes * 10;
            int maxNickels = rest2 / 5;
            while (maxNickels >= nickels)
            {
                int rest3 = rest2 - nickels * 5;
                int pennies = rest3;
                printf("[%d,%d,%d,%d]", quarters, dimes, nickels, pennies);
                nickels++;
            }
            dimes++;
        }
        quarters++;
    }
}