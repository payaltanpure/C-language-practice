

#include <stdio.h>

int main()
{
    int mul = 1, i = 2;

    do
    {
        mul = mul * i;
        i++;
    }
    while (i <= 8);

    printf("\nThe multiplication from 2 to 8 is: %d", mul);

    return 0;
}
