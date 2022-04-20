#include <stdio.h>

int main(void)
{

    unsigned int age;

    while (age)
    {
        printf("Entrez votre année de naissance: ");
        scanf("%d", &age);

        age = 2022 - age;

        age == 20 ? printf("waouh vouz avez un age paire \n") : printf("Vous avez %d ans\n", age);
    }

    return 0;
}