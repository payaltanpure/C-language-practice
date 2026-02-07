#include<stdio.h>
int main()
{
    int i=1,a,sum=0, sub=2;
    do 
    {
        if ( i%2==0 ) 
        {
            sum+=i;
            if(i!=2)
            {
                sub-=i;
            }
            
        }
        i++;
    }
    while( i<=50);
    printf("\nSum is: %d", sum);
    printf("\nSub is: %d", sub);
    return 0;
}