#include <stdio.h>
int main ()
{
    int i=1;
    int sum1=0, sum2=0;
    while (i<=100)
    {
        if ( i%7==0)
        {
            sum1+=i; //sum1= sum+i;
        }
        if (i%5==0)
        {
            sum2+=i;
        }
        i++;
    }
    printf("\n%d", sum1);
    printf("\n%d", sum2);
    return 0;
}