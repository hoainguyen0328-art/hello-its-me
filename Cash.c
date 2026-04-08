#include <stdio.h>
#include <math.h>
int main ()
{
    float dollars;

    do
    {
        printf("change owed: ");
        scanf("%f", &dollars);
    }
    while (dollars <0);

    int cents = round(dollars *100);
    int coin = 0;

    coin += cents /25;
    cents %= 25;

    coin += cents /10;
    cents %= 10;

    coin += cents/5;
    cents %= 5;

    coin += cents;

    printf("%i\n", coin);

}