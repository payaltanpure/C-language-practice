#include <stdio.h>

int main()
{
    int num = 49, rem, sum;

    while (num != 1 && num != 4)
    {
        sum = 0;    //declared inside becoz , if we declare it outside then when inner while executes the sum do not become 0 and start executing by taking its existing value which is stored on it in previous while and it is wrong we want the value of sum as 0 for every new iteration of inner while  

        while (num > 0)
        {
            rem = num % 10;
            sum += rem * rem;
            num /= 10;
        }

        num = sum;  
    }

    if (num == 1)
        printf("Number is Happy");
    else
        printf("Number is Not Happy");

    return 0;
}
