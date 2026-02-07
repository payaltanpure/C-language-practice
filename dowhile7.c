#include<stdio.h>
int main()
{
    int i=1,sum=0;
    do 
    {
        if (( i%2==0 ) && (i%4==0))
        {
            sum+=i;
        }
        i++;
    }
    while( i<=50);
    printf("\nSum is: %d", sum);
    return 0;
}