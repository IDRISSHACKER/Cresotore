#include <stdio.h>
#include <string.h>
#include "multi.h"
#define tableLimit 9

void pointer()
{
    int a = 5;
    int b = 10;

    int *pa = &b;
    int *pb = &a;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Apres le pointage %p & %p\n", pa, pb);
    printf("a = %d\n", *pa);
    printf("b = %d\n", *pb);
}

void tab(int *t, unsigned int size)
{

    unsigned int counter;

    for (counter = 0; counter < size; counter++)
    {
        printf("> %d \n", t[counter]);
    }
}

int main(void)
{

    char hack[] = "Hackeur";

    // multiplication(tableLimit);

    printf("Admin name = %d [adress=%p]", strlen(hack), &hack);

    // pointer();
    // int t[4] = {1, 2, 3, 4};
    // tab(t, 4);

    return 0;
}
