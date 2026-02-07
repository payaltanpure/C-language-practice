#include <stdio.h>
int main()
{
   int a=0;
    int sum=0;
    int limit;
    printf("\nEnter the limit till which you want sum of even nos :");
    scanf("%d", &limit);
    do
    {
        if (a%2==0)
        {
            sum= sum+a;
        }
        a++;

    } while (a<=limit);
 
    printf("\nSum of first 100 even nos is:%d", sum); 
    return 0; 
}

