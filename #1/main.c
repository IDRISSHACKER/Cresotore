#include <stdio.h>

int main(void)
{

    float a = 0;
    int b = 3;

    if (a < b)
    {
        printf("%.0f < %d", a, b);
    }
    else
    {
        printf("%.0f > %d", a, b);
    }

    return 0;
}