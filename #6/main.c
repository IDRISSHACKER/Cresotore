#include <stdio.h>

void sayHello(int i)
{

    if (i == 10)
        return;
    printf("Bonjour .\n");

    sayHello(i + 1);
}

int main(void)
{
    sayHello(8);
    return 0;
}