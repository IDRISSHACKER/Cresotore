#include <stdio.h>
#include "multi.h"

void multiplication(unsigned int limit)
{
    unsigned int multi = 1;
    unsigned int counter;

    while (multi)
    {
        printf("Entrez un nombre à multiplier: ");
        scanf("%d", &multi);

        printf(">Table de %d \n", multi);
        for (counter = 0; counter <= limit; ++counter)
        {
            printf("%d x %d = %d \n", counter, multi, (counter * multi));
        }
    }
}